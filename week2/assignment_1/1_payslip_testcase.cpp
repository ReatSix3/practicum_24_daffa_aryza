#include <iostream>
std::string dot_adder(long int x){ // FUNCTION TO ADD ,00 AND . SO LIKE THIS 1.000.000,00
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
int main(){
        long int gross_salary, tax, net_salary, fixed_installment, fixed_insurance;
        std::string name = "Daffa Sigma Pasya";
        gross_salary = 6900000;
        fixed_installment = 200000;
        fixed_insurance = 420000;
        tax = gross_salary*(0.2);
        net_salary = gross_salary - (tax+fixed_installment+fixed_insurance);
        std::cout<< "Name: "<<name;
        std::cout<< "\nGross Salary : Rp"<<dot_adder(gross_salary);
        std::cout<< "\nTax (20%)    : Rp"<<dot_adder(tax);
        std::cout<< "\nInstallment  : Rp"<<dot_adder(fixed_installment);
        std::cout<< "\nInsurance    : Rp"<<dot_adder(fixed_insurance);
        std::cout<< "\nNet Salary   : Rp"<<dot_adder(net_salary);
        if((tax != 1380000) or (net_salary != 4900000)){
            std::cout<<"\n Test Case Failed..";
            std::cout<<"Expected Tax: "<<"1380000\n";
            std::cout<<"Expected Net Salary: "<<"4900000\n";
        }
        else{
            std::cout<<"\n Test case Succeed..";
        }
            return 0;
        }
