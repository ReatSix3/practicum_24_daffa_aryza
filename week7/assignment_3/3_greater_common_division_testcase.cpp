// 3. Write a program with recurrence function to calculate GCD (Greater Common Division)!
#include <iostream>
int gcd(int a,int b,int divisor,int n,int value);
int main(){
    int X,Y;
    X = 60;
    Y = 75;
    int divisor;
    if(X>Y){
        divisor = Y;
    }
    else{
        divisor = X;
    }
    if(gcd(X,Y,divisor,1,1) == 15){
        std::cout<<"Expected result: 15\n";
        std::cout<<"Got: "<<gcd(X,Y,divisor,1,1);
        std::cout<<"\nTest case passed..";
    }
    else{
        std::cout<<"Expected result: 15\n";
        std::cout<<"Got: "<<gcd(X,Y,divisor,1,1);
        std::cout<<"\nTest case failed..";
    }
    return 0;
}
int gcd(int a,int b,int divisor,int n,int value){
    if(n<=divisor){
        if((a % n == 0) and (b % n == 0)){
            return gcd(a,b,divisor,n+1,n);
        }
        else{
            return gcd(a,b,divisor,n+1,value);
        }
    }
    else{
        return value;
    }
}