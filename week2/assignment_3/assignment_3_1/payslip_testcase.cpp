#include <iostream>
#include <vector>
#include <string>
#include <cmath>    
std::string dot_adder(long int x){
    std::string x_str;
    long int i,x_size;
    x_str = std::to_string(x);
    x_size = x_str.length();
    for(i = x_size-3;i>=-3;i-=3){
        if(i<2 and x<0){
            std::cout<<"";
        }
        else if(i>0){
            x_str.insert(i,".");
        }
        long int checker;
        checker = i;
        checker -= 3;
        if(checker<=0){
            x_str.append(",00");
            return x_str;
        }
    }
}
void payslip(std::string name,long int gross_salary,long int fixed_installment,long int fixed_insurance){
        long int tax, net_salary;
        tax = gross_salary*(0.5);
        net_salary = gross_salary - (tax+fixed_installment+fixed_insurance);
        std::cout<< "Name: "<<name;
        std::cout<< "\nGross Salary : Rp"<<dot_adder(gross_salary);
        std::cout<< "\nTax (20%)    : Rp"<<dot_adder(tax);
        std::cout<< "\nInstallment  : Rp"<<dot_adder(fixed_installment);
        std::cout<< "\nInsurance    : Rp"<<dot_adder(fixed_insurance);
        std::cout<< "\nNet Salary   : Rp"<<dot_adder(net_salary)<<"\n\n";
}

int main(){
    payslip("Daffa Aryza Pasya",19062006,690,420000);
    payslip("Klara Sigma Daniswara",690000,140,1000);
    payslip("Monkey D. Filbert",69,5,10);
    payslip("Ethan D. Nerd",6958915,100,5);
    }

    
