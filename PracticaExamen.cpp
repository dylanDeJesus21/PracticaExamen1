#include <iostream>
#include <cmath>
#include "Circle.h"

using namespace std;

double perimeterCircle(Circle s){

    double perimeter = 2*M_PI*s.getRadius();
    return perimeter;

}

int main(){

    cout<<"Perimeter is: "<<perimeterCircle(Circle(12))<<endl;

}
