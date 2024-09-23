#include <iostream>
int main(){
    long long int n;
    std::cout<<"Input the value of n, for the result of multiplication from 1 to 10 with number n: ";
    std::cin>>n;
    for(long long int i = 1;i<=10;i++){
        long long int multi_val;
        multi_val = n*i;
        std::cout<<"The result of multiplcation of "<<n<<" X "<<i<<" is "<<multi_val<<"\n";
    }
    return 0;
}