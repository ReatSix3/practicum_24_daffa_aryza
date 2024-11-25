#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string str;
    std::cin>>str;
    std::vector<char> v;
    for(int i = str.length()-1;i>=0;i--){
        v.push_back(str[i]);
    }
    for(int i = 0;i<str.length();i++){
        std::cout<<v[i];
    }
    return 0;
}