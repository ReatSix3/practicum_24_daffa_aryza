// 2. Write a program with recurrence function to calculate x! (x factorial)!
int factorial(int n);
#include <iostream>
int main(){
    if(factorial(7) == 5040){
        std::cout<<"Expected value: 5040\n";
        std::cout<<"Got: "<<factorial(7);
        std::cout<<"\nTest case passed!!!\n";
    }
    else{
        std::cout<<"Expected value: 5040\n";
        std::cout<<"Got: "<<factorial(7)<<" instead...\n";
        std::cout<<"Test case failed..\n";
    }
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