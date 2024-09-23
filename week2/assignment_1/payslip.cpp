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
        std::string name;
        std::cout << "Insert the employee's name: ";
        std::getline(std::cin, name);
        std::cout<< "Insert employee's gross salary: ";
        std::cin>> gross_salary;
        tax = gross_salary*(0.2);
        std::cout<< "Insert fixed fixed_installment: ";
        std::cin>>fixed_installment;
        std::cout<< "Insert fixed fixed_insurance: ";
        std::cin>>fixed_insurance;
        net_salary = gross_salary - (tax+fixed_installment+fixed_insurance);
        std::cout<< "Name: "<<name;
        std::cout<< "\nGross Salary : Rp"<<dot_adder(gross_salary);
        std::cout<< "\nTax (20%)    : Rp"<<dot_adder(tax);
        std::cout<< "\nInstallment  : Rp"<<dot_adder(fixed_installment);
        std::cout<< "\nInsurance    : Rp"<<dot_adder(fixed_insurance);
        std::cout<< "\nNet Salary   : Rp"<<dot_adder(net_salary);
    }

    
