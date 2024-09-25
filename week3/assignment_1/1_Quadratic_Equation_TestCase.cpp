#include <iostream>
#include <cmath>
long double Quadratic_Equation(long double a,long double b,long double c){
    long double D;
    D = (pow(b,2))-(4*a*c);
    if(D>0){
        long double x1 = (-b+sqrt(D))/2*a;
        long double x2 = (-b-sqrt(D))/2*a;
        std::cout<<"The roots of the equation are: "<<x1<<" and "<<x2;
    }
    else if(D==0){
        long double x_root = -b/(2*a);
        std::cout<<"The roots are real and equal which is: "<<x_root;
    }
    else if(D<0){
        std::cout<<"The roots are imaginary.";
    }
    return D;
}
int main(){
    if((Quadratic_Equation(1,4,4) == 0) == true){
        std::cout<<"\nTest Case 1 Succeed..\n";
    }
    else{
        std::cout<<"\nTest Case 1 Failed..\n";
        std::cout<<"Expected result: determinant equals to 0, there is one real root.";
    }
    if((Quadratic_Equation(1,4,3) > 0) == true){
        std::cout<<"\nTest Case 2 Succeed..\n";
    }
    else{
        std::cout<<"\nTest Case 2 Failed..\n";
        std::cout<<"Expected result: determinant more than 0, there are two real roots.";

    }
    if((Quadratic_Equation(1,3,4) < 0) == true){
        std::cout<<"\nTest Case 3 Succeed..\n";
    }
    else{
        std::cout<<"\nTest Case 3 Failed..\n";
        std::cout<<"Expected result: determinant less than 0, the roots are imaginary.";
    }
    }
