// 2. Write a program with recurrence function to calculate x! (x factorial)!
int factorial(int n);
#include <iostream>
int main(){
    int x;
    std::cout<<"Input the value of 'x' in x!\n";
    std::cin>>x;
    std::cout<<"The value of "<<x<<"! is "<<factorial(x);
    return 0;
}
int factorial(int n){
    if(n == 1){
        return n;
    }
    else{
        return n*factorial(n-1);
    }
}