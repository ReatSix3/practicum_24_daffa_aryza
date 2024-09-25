#include <iostream>
long double highest_num(long double number_1,long double number_2,long double number_3){
    if(number_1>=number_2){
        if(number_1>number_3){
            std::cout<<number_1<<" is the HIGHEST number";
            return number_1;
        }
        else if(number_3>number_1){
            std::cout<<number_3<<" is the HIGHEST number";
            return number_3;
        }
        }
    else if(number_2>number_1){
        if(number_2>number_3){
            std::cout<<number_2<<" is the HIGHEST number";
            return number_2;
        }
        else if(number_3>number_2){
            std::cout<<number_3<<" is the HIGHEST number";
            return number_3;
        }
    }

}
int main(){
    if(highest_num(3.0,3.1,2.0) != 3.1){
        std::cout<<"\nTest case failed..";
        std::cout<<"Expected result: "<<"3.1";
    }
    else{
        std::cout<<"\nTest case succeed..";
    }
    return 0;   
}
