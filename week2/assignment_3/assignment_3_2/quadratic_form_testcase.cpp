
#include <iostream>
#include <cmath>
void discriminant_finder(double a,double b,double c){
        double discriminant = (pow(b,2))-4*a*c;
        if(discriminant>0){
            double x1 = (-b + sqrt(discriminant))/2*a;
            double x2 = (-b - sqrt(discriminant))/2*a;
            std::cout<<"The roots of the equation are "<<x1<<" and "<<x2<<".\n";
        }
        else if(discriminant==0){
            double x = -b/(2*a);
            std::cout<<"The root of the equation is "<<x<<".\n";
        }
        else if(discriminant<0){
            std::cout<<"There are no real roots.\n";
        }
    }
int main()
{
    discriminant_finder(1,4,3);
    discriminant_finder(1,6,9);
    discriminant_finder(10,1,69);
    return 0;
}