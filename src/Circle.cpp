#include <cmath>
#include "include/Circle.h"

double Circle::getPerimeter() {

    double perimeter = 2*3.1415*this->getRadius();
    return perimeter;

}

double Circle::getArea(){

    double area = 3.1415*pow(this->getRadius(), 2.0);
    return area;
}