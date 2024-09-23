#include <iostream>
#include <cmath>
int main(){
    long double a,b,c;
    std::cout<<"Insert the a value of ax^2+bx+c = 0: ";
    std::cin>>a;
    std::cout<<"Insert the b value of ax^2+bx+c = 0: ";
    std::cin>>b;
    std::cout<<"Insert the c value of ax^2+bx+c = 0: ";
    std::cin>>c;
    long double D;
    D = (pow(b,2))-(4*a*c);
    if(D>0){
        long double x1 = (-b+sqrt(D))/2*a;
        long double x2 = (-b-sqrt(D))/2*a;
        std::cout<<"The roots of the equation are: "<<x1<<" and "<<x2;
    }
    else if(D=0){
        long double x_root = -b/(2*a);
        std::cout<<"The roots are real and equal which is: "<<x_root;
    }
    else if(D<0){
        std::cout<<"The roots are imaginary.";
    }
    return 0;
}
