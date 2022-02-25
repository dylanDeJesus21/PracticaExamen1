#include <cmath>
class Circle{

    private:
    //Propiedades
    double radius;

    public:

    //Getters
        double getRadius() {return radius;}

    //Setters
        void setRadius(double r) {radius = r;}

    //Constructor
    Circle(double r){

        radius = r;
        
    }

    //Method declaration
    double perimeterCircle();    

    
};