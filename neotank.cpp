#include "neotank.h"

neatank::neatank(int pos[2],int color, int round):Unit(pos, color, round)
{
    this->absMP=6;
    this->MP=this->absMP;
    this->cost=22000;
    this->move_type="T";

}
