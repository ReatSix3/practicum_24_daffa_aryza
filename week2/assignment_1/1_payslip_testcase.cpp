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
    long int payslip(std::string name,long int gross_salary,long int fixed_installment,long int fixed_insurance){ 
        long int tax,net_salary; 
        tax = gross_salary*(0.2);
        net_salary = gross_salary - (tax+fixed_installment+fixed_insurance);
        std::cout<< "Name: "<<name;
        std::cout<< "\nGross Salary : Rp"<<dot_adder(gross_salary);
        std::cout<< "\nTax (20%)    : Rp"<<dot_adder(tax);
        std::cout<< "\nInstallment  : Rp"<<dot_adder(fixed_installment);
        std::cout<< "\nInsurance    : Rp"<<dot_adder(fixed_insurance);
        std::cout<< "\nNet Salary   : Rp"<<dot_adder(net_salary);
        return net_salary;
    }
int main(){
        if(payslip("Daffa Sigma Pasya",1500000,300000,250000) != 650000){
            std::cout<<"\n Test Case 1 Failed..";
            std::cout<<"Expected Net Salary: "<<"Rp.650000,00\n";
        }
        else{
            std::cout<<"\nTest case 1 Succeed..\n";
        }
        if(payslip("Ethan Baron Halim",2000000,690000,909696) != 304){
            std::cout<<"\n Test Case 2 Failed..";
            std::cout<<"Expected Net Salary: "<<"Rp.304,00\n";
        }
        else{
            std::cout<<"\nTest case 2 Succeed..\n";
        }
        if(payslip("Filbert Ethanuel Ohio",1000,45,100) != 655){
            std::cout<<"\n Test Case 3 Failed..";
            std::cout<<"Expected Net Salary: "<<"Rp.655,00\n";
        }
        else{
            std::cout<<"\nTest case 3 Succeed..\n";
        }
            return 0;
        }
