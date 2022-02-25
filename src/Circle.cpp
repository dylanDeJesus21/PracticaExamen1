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

double Circle::getVolume(){

    double volume = (4.0/3.0)*3.1415*this->getRadius();
    return volume;
}

double Circle::sumVolumes(Circle list[], int numCircles){

    double sum = 0;

    for(int i=0; i<numCircles; i++){

        sum += list[i].getVolume();
    }
    return sum;


}