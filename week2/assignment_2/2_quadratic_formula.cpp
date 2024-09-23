
#include <iostream>
#include <cmath>

int main()
{
        double a,b,c;
        std::cout<<"Insert the value of a in ax^2+bx+c: ";
        std::cin>>a;
        std::cout<<"Insert the value of b in ax^2+bx+c: ";
        std::cin>>b;
        std::cout<<"Insert the value of c in ax^2+bx+c: ";
    std::cin>>c;
        double discriminant = (pow(b,2))-4*a*c;
        if(discriminant>0){
            double x1 = (-b + sqrt(discriminant))/2*a;
            double x2 = (-b - sqrt(discriminant))/2*a;
            std::cout<<"The root of the equation are "<<x1<<" and "<<x2<<".\n";
        }
        else if(discriminant==0){
            double x = -b/(2*a);
            std::cout<<"The root of the equation is "<<x<<".\n";
        }
        else if(discriminant<0){
            std::cout<<"There are no real roots.\n";
        }
    return 0;
}