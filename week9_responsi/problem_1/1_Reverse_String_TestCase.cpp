#include <iostream>
#include <string>
#include <vector>
std::string reverser(std::string x){
    std::vector<char> v;
    std::string output;
    for(int i = x.length()-1;i>=0;i--){
        v.push_back(x[i]);
    }
    for(int i = 0;i<x.length();i++){
        output += v[i];
    }
    return output;
}
int main()
{
    std::string str1 = "ReatSix3";
    std::string str2 = "SigmaOMAHCP";
    std::string str3 = "SkibidiToiletWRIZZ";
    std::cout<<reverser(str1)<<std::endl;
    if(reverser(str1) == "3xiStaeR"){
        std::cout<<"Test Case Succeed"<<std::endl;
    }
    else{
        std::cout<<"Test Case Failed"<<std::endl;
    }
    std::cout<<reverser(str2)<<std::endl;
    if(reverser(str2) == "PCHAMOamgiS"){
        std::cout<<"Test Case Succeed"<<std::endl;
    }
    else{
        std::cout<<"Test Case Failed"<<std::endl;
    }
    std::cout<<reverser(str3)<<std::endl;
    if(reverser(str3) == "ZZIRWtelioTidibikS"){
        std::cout<<"Test Case Succeed"<<std::endl;
    }
    else{
        std::cout<<"Test Case Failed"<<std::endl;
    }
    return 0;
}