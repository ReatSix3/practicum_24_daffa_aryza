#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    vector<int> v1= {10,25,65,70,100};
    vector<int> v2 = {20,45,55,85,90};
    vector<int> v3 = {};
    int v3_len = v1.size() + v2.size();
    int v1_i = 0;
    int v2_i = 0;
    for(int i = 0;i<v3_len;i++){
        if(v1_i == v1.size()){
            v3.push_back(v2[v2_i]);
            v2_i += 1;
        }
        else if(v2_i == v2.size()){
            v3.push_back(v1[v1_i]);
            v1_i += 1;
        }
        else if(v1[v1_i]>v2[v2_i]){
            v3.push_back(v2[v2_i]);
            v2_i += 1;
        }
        else if(v1[v1_i]<=v2[v2_i]){
            v3.push_back(v1[v1_i]);
            v1_i += 1;
        }
    }
    for(int i = 0;i<v3_len;i++){
        cout<<v3[i]<<" ";
    }
    std::cout<<std::endl;
    bool condition = false;
    if(v3[0] == 10){
        if(v3[1] == 20){
            if(v3[2] == 25){
                if(v3[3] == 45){
                    if(v3[4] == 55){
                        if(v3[5] == 65){
                            if(v3[6] == 70){
                                if(v3[7] == 85){
                                    if(v3[8] == 90){
                                        if(v3[9] == 100){
                                            std::cout<<"Test case Succeed"<<std::endl;
                                            condition = true;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if(condition == false){
        std::cout<<"Test case Failed"<<std::endl;
    }
    return 0;
}