#ifndef UNIT_H
#define UNIT_H
#include "gameobject.h"
#include <vector>
using namespace std;
#include "map.h"


class Unit : public GameObject
{
private:
    int color;
    int round;
    vector<vector<int>> *PDC; //pointeur vers defenseChart
    Map *PTM;                 //pointeur vers terrainMap
    Map *PUM;                 //pointeur vers unitMap




protected:
    int HP;
    int cost;
    int move_type;
    int range[2];
    int absMP;
    int MP;
    int type;




public:
    Unit(int pos[2], int color, int round, vector<vector<int>> *PDC, Map *PTM, Map *PUM);
    int getHP() const;                    //fait
    void setHP(int newHP,char sign);      //fait
    void setHP();                         //fait
    int getcolor() const;                 //fait
    int getcost() const;                  //fait
    int getround() const;                 //fait
    void setround();                      //fait
    int gettype() const;                  //fait
    int getMoveType() const;                     //fait
    int getMP() const;                    //fait
    int get_D_TR();                       //fait
    int get_MPLoss(int x, int y);         //fait
    int get_absMP();                      //fait
    vector<vector<int>> getDefenseChart() const; //fait
    Map getTerrainMap() const;            //fait
    Map getUnitMap() const;               //fait
    void movePossib_recusif(vector<vector<int>> l1, vector<vector<int>> l2);   //a est la position qui a été vérifiée avant
    vector<vector<int>> movePossib(int x,int y); //fait   //(x,y) la position actuelle de l'unité
    int move();
    void join_unit(Unit Unit2); 
    void setMP(int newMP);                //fait
    void resetMP();                       //fait
    bool can_attack(Unit defender);       //fait
    int damage(Unit defender);            //fait
    int find_B(Unit defender);            //fait
    void attack(Unit defender);           //fait
    bool terrain_avail(int x, int y);     //fait
    vector<vector<int>> fusion(vector<vector<int>> l4,vector<vector<int>> vLeft, vector<vector<int>> vRight);
    void mergesort_ListPos(vector<vector<int>> l4,int left,int mid,int right);
};

#endif // UNIT_H
