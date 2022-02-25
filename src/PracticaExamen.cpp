#include <iostream>
#include <cmath>
#include "include/Circle.h"


using namespace std;


int main(){

    cout<<"Perimeter of circle 1 is: "<<Circle(12).getPerimeter()<<endl;
    cout<<"Perimeter of circle 2 is: "<<Circle(14).getPerimeter()<<endl;

    cout<<"Area of circle 3 is "<<Circle(4).getArea()<<endl;
    cout<<"Area of circle 4 is "<<Circle(3).getArea()<<endl;

    cout<<"Volume of sphere 1 is "<<Circle(14).getVolume()<<endl;

    Circle myList[4]{Circle(12), Circle(14), Circle(4), Circle(3)};

    cout<<"The sum of the volumes of all four spheres is "<<Circle::sumVolumes(myList, 4)<<endl;


    
}
