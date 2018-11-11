#ifndef FACTORY_H
#define FACTORY_H
#include "building.h"
#include "player.h"
#include "unit.h"

class Factory:public Building
{
public:
    Factory(int pos[2], Player* player,vector<vector<int>> *DC);
    Factory(int pos[2],vector<vector<int>> *DC);
    Unit* createUnit(int typeUnit);   //changer le nom du type selon
    void setLife(int damage, Player* attacker);

private:
    vector<vector<int>> *DC;
};

#endif // FACTORY_H
