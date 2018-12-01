#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include "building.h"
#include "unit.h"
#include "map.h"


class Player
{
public:
    Player(int playerNUmber, vector<Building*> firstBuildings,Map* terrainMap,Map* unitMap);
    vector<Building*> get_listBuilding();
    vector<Unit*> get_listUnit();
    void add_unit(Unit *unit);
    void delete_unit(Unit *unit);
    void add_building(Building* building);
    void delete_building(Building* building);
    int get_money();
    void set_money(int diff,char sign);
private:
    int money;
    vector<Unit*> listUnit;
    vector<Building*> listBuilding;
    Map* terrainMap;
    Map* unitMap;
    int playerNumber;
};

#endif // PLAYER_H
