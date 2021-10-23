#include <iostream>
#include "../inc/Sensor.h"

using namespace std;

sensor::sensor(int a_, int v_)  {

    this->a = a_;
    this->v = v_;

}

float sensor::get_aceleracion()  {

    float areal = (a * 5.0) / 1023.0;

    return areal;

}

float sensor::get_velocidad()  {

    float vreal = (v * 1000.0) / 4095.0;

    return vreal;

}

float campo::get_campo()  {

    float creal = (c * 4800.0) / 511.0 ;

    return creal;

}