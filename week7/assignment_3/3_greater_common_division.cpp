// 3. Write a program with recurrence function to calculate GCD (Greater Common Division)!
#include <iostream>
int gcd(int a,int b,int divisor,int n,int value);
int main(){
    int X,Y;
    std::cout<<"Insert the value of 'X' for the calculation of GCD between 'X' and 'Y'\n";
    std::cin>>X;
    std::cout<<"Insert the value of 'Y' for the calculation of GCD between 'X' and 'Y'\n";
    std::cin>>Y;
    int divisor;
    if(X>Y){
        divisor = Y;
    }
    else{
        divisor = X;
    }
    std::cout<<"The GCD between "<<X<<" and "<<Y<<" is "<<gcd(X,Y,divisor,1,1);
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