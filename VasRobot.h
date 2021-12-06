#ifndef VASROBOT_H_INCLUDED
#define VASROBOT_H_INCLUDED
#include "Prohledavac.h"

using namespace std;

class VasRobot : public Prohledavac
{
public:VasRobot();

virtual bool start(Bludiste & map);
virtual bool start(BludisteOdkryte & map);
virtual bool stop();
virtual void krok(Bludiste & map);
virtual void krok(BludisteOdkryte & map);
virtual std::string jmeno();

private:Souradnice s;

};


#endif // ROBOT_H_INCLUDED
