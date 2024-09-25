
#include <iostream>
#include <cmath>
double quadratic_formula(double a,double b,double c){
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
    return discriminant;
}

int main()
{
    if((quadratic_formula(1,6,9) == 0) == true){
        std::cout<<"Test Case 1 Succeed..\n";
    }
    else{
        std::cout<<"Test Case 1 Failed..\n";
        std::cout<<"Expected result: determinant equals to 0, there is one real root.";

    }
    if((quadratic_formula(1,5,6) > 0) == true){
        std::cout<<"Test Case 2 Succeed..\n";
    }
    else{
        std::cout<<"Test Case 2 Failed..\n";
        std::cout<<"Expected result: determinant more than 0, there are two real roots.";

    }
    if((quadratic_formula(1,1,4) < 0) == true){
        std::cout<<"Test Case 3 Succeed..\n";
    }
    else{
        std::cout<<"Test Case 3 Failed..\n";
        std::cout<<"Expected result: determinant less than 0, the roots are imaginary.";
    }
    return 0;
}