#include "recon.h"

Recon::Recon(int pos[2],int color, int round,vector<vector<int>> *TDC,Map *PTM,Map *PUM):Unit(pos, color, round,TDC,PTM,PUM)
{
    this->type=54;
    this->absMP=8;
    this->MP=this->absMP;
    this->cost=4000;
    this->move_type=3;

}
