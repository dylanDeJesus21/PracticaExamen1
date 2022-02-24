#include <iostream>
#include <cmath>

using namespace std;

double perimeterCircle(double r){

    double perimeter = 2*M_PI*r;
    return perimeter;

}

int main(){

    cout<<"Perimeter is: "<<perimeterCircle(40)<<endl;

}
