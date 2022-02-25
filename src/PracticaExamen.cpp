#include <iostream>
#include <cmath>
#include "include/Circle.h"


using namespace std;


int main(){

    cout<<"Perimeter of circle 1 is: "<<Circle(12).getPerimeter()<<endl;
    cout<<"Perimeter of circle 2 is: "<<Circle(14).getPerimeter()<<endl;

    cout<<"Area of circle 1 is "<<Circle(4).getArea()<<endl;
    cout<<"Area of circle 2 is "<<Circle(3).getArea()<<endl;
    
}
