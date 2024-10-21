// 1. Write a program with some function to calculate simple mathematic operation,
//namely addition or difference!
//2. Write a program with recurrence function to calculate x! (x factorial)!
//3. Write a program with recurrence function to calculate GCD (Greater Common
//Division)!
double addition(double a,double b);
double difference(double a,double b);
double multiply(double a,double b);
double division(double a,double b);

#include <iostream>
int main(){
    int n;
    double x,y;
    std::cout<<"What kind of operation would you want to do for 'X' and 'Y'?\n1)Additioning\n2)Difference\n3)Multiply\n4)Division\n";
    std::cin>>n;
    std::cout<<"Please insert the value of 'X'\n";
    std::cin>>x;
    std::cout<<"Please insert the value of 'Y'\n";
    std::cin>>y;
    if(n == 1){
        std::cout<<"The result of the calculation is: "<<addition(x,y);
    }
    if(n == 2){
        std::cout<<"The result of the calculation is: "<<difference(x,y);
    }
    if(n == 3){
        std::cout<<"The result of the calculation is: "<<multiply(x,y);
    }
    if(n == 4){
        std::cout<<"The result of the calculation is: "<<division(x,y);
    }
    return 0;
}
double addition(double a,double b){
    return a+b;
}
double difference(double a,double b){
    return a-b;
}
double multiply(double a,double b){
    return a*b;
}
double division(double a,double b){
    return a/b;
}
