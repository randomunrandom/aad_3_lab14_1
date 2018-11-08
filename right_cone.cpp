//
// Created by danai on 11/8/18.
//

#include "right_cone.h"

void right_cone::user_input() {
    cout << "введите радиус основания: ";
    cin >> r;
    while(r <= 0) {
        cout << "введите натуральное число : ";
        cin >> r;
    }
    cout << "введите радиус основания: ";
    cin >> h;
    while(h <= 0) {
        cout << "введите натуральное число : ";
        cin >> h;
    }
}

void right_cone::print() {
    cout << "радиус данной фигуры: " << r << endl;
    cout << "высота данной фигуры: " << h << endl;
}
