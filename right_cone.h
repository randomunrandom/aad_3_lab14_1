//
// Created by danai on 11/8/18.
//

#ifndef AAD_3_LAB14_1_RIGHT_CONE_H
#define AAD_3_LAB14_1_RIGHT_CONE_H

#include <cmath>
#include <iostream>
using namespace std;


class right_cone {
private:
    float r;
    float h;
public:
    right_cone(): r(0), h(0){}
    //right_cone(int i): r(i), h(i){}
    //right_cone(int i): r(0), h(0){}
    right_cone(int _r, int _h): r(_r), h(_h){}
    void user_input();
    void print();
    float base_perimetr() {return float(2 * M_PI * r);}
    float base_area() {return float(M_PI * r * r);}
    float cone_volume() {return float((M_PI * r * r * h)/3);}
};


#endif //AAD_3_LAB14_1_RIGHT_CONE_H
