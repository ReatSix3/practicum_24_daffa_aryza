// 1. Write a program with some function to calculate simple mathematic operation, namely addition or difference!
double addition(double a,double b);
double difference(double a,double b);
double multiply(double a,double b);
double division(double a,double b);

#include <iostream>
int main(){
    bool test1,test2,test3,test4 = false;
    if(addition(169,98) == 267){
        std::cout<<"Addition test case passed!!\n";
        test1 = true;
    }
    if(difference(197,26) == 171){
        std::cout<<"Difference test case passed!!\n";
        test2= true;
    }
    if(multiply(28,98) == 2744){
        std::cout<<"Multiply test case passed!!\n";
        test3 = true;
    }
    if(division(50,25) == 2){
        std::cout<<"Division test case passed!!\n";
        test4 = true;
    }
    if((test1 == true) & (test2 == true) & (test3 == true) & (test4= true)){
        std::cout<<"All test case passed!!";
    }
    else{
        std::cout<<"One or more than one test case failed... ";
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
