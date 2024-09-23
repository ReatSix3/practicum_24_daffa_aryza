#include <iostream>
int main(){
    long long int n,counter,n_value;
    n_value = 1;
    counter = 1;
    std::cout<<"Input the value of n, for the result of sum of number 1 to n: ";
    std::cin>>n;
    for(int i = 1;i<n;i++){
        counter += 1;
        n_value += counter;
        if(i == (n-1)){
            std::cout<<"The sum of the value is "<<n_value<<"\n";
        }
    }
    return 0;
}