/*
 * created by Danil Kireev, PFUR NFI-201, 8.11.18, 09:00
 */
#include "right_cone.h"

/*
 *  №4
 *  Объявить класс SpaseFigure (фигура в 3-х мерном пространстве с кругом в основании)  Фигура  задается радиусом основания и высотой.
 *  Определить:
 *      конструктор с двумя действительными параметрами.
 *  методы:
 *      периметр perimetr() основания
 *      площадь area() основания
 *      объем  фигуры
 *  В методе main() протестировать все определенные Вами методы.
 */

int main() {
    cout << "программа находит периметр и площадь основания и объём правильного конуса." << endl;
    right_cone el;
    el.user_input();
    el.print();
    cout << "периметр основания: " << el.base_perimetr() << endl;
    cout << "площадь основания: " << el.base_area() << endl;
    cout << "объём всей фигуры: " << el.cone_volume() << endl;
    return 0;
}