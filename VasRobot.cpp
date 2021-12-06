#include "VasRobot.h"
#include "Prohledavac.h"
#include "Bludiste.h"
#include <iostream>



using namespace std;




VasRobot::VasRobot() {}



bool VasRobot::start(Bludiste & map)
{
return true;
}


bool VasRobot::start(BludisteOdkryte & map){}
bool VasRobot::stop()
{
return true;
}
void VasRobot::krok(Bludiste & map)
{
bool right;
bool left;
bool down;
bool up;
bool krok_vpravo;

up=map.nahoru();
while (up==1){
    up=map.nahoru();
    }
krok_vpravo=map.vpravo();

if (krok_vpravo==1){
    down=map.dolu();
    while (down==1) {
       down=map.dolu();
    }
}
else {}

}


void VasRobot::krok(BludisteOdkryte & map){}

std::string VasRobot::jmeno()
{
return "Dwight";
}

