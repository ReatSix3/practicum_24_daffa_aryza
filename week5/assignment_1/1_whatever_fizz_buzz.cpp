#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<std::string> output{};
    for(int i = 1;i<=100;i++){
        if(i % 15 == 0){
            std::cout<<"FizzBuzz ";
            output.push_back("FizzBuzz");
        }
        else if(i % 5 == 0){
            std::cout<<"Buzz ";
            output.push_back("Buzz");
        }
        else if(i % 3 == 0){
            std::cout<<"Fizz ";
            output.push_back("Fizz");
        }
        else{
            std::string i_string = std::to_string(i);
            std::cout<<i_string<<" ";
            output.push_back(i_string);
        }
    }
    //int len_output = std::ssize(output);
    //std::cout<<" LOL : "<<len_output;
    std::cout<<"\n \n{";
    for(int x = 0;x<100;x += 1){
        std::cout<<output[x];
        if(x != 99){
            std::cout<<", ";
    }
    }
    std::cout<<"}";
    //std::cout<<output;
    return 0;
    }   
