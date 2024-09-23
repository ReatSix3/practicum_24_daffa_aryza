#include <iostream>
int main(){
    long double number_1, number_2, number_3;
    std::cout<<"Insert the value of number 1: ";
    std::cin>>number_1;
    std::cout<<"Insert the value of number 2: ";
    std::cin>>number_2;
    std::cout<<"Insert the value of number 3: ";
    std::cin>>number_3;
    if(number_1>=number_2){
        if(number_1>number_3){
            std::cout<<number_1<<" is the HIGHEST number";
        }
        else if(number_3>number_1){
            std::cout<<number_3<<" is the HIGHEST number";
        }
        }
    else if(number_2>number_1){
        if(number_2>number_3){
            std::cout<<number_2<<" is the HIGHEST number";
        }
        else if(number_3>number_2){
            std::cout<<number_3<<" is the HIGHEST number";
        }
    }
    
    return 0;   
}
