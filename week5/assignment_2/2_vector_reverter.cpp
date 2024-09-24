#include <iostream>
#include <vector>
#include <string>

int main(){
    std::vector<int> old_vektor{5,4,3,2,1};
    int vk_size = old_vektor.size();
    std::vector<int> new_vektor;
    for(int i = (vk_size-1);i >= 0;i-=1){
        new_vektor.push_back(old_vektor[i]);
    }
    
    std::cout << '[';
    for(int x = 0;x < vk_size;x ++){
        std::cout<<new_vektor[x];
        
        if (x != vk_size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]\n";
    return 0;
}