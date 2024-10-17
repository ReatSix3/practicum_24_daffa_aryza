#include<iostream>
struct studentData 
    {
        std::string NIM;
        double UTS;
        double UAS;
        double average;
    };
studentData theData[50];
   
int main()
{
    int n;
    while(true){
        std::cout<<"Insert the number of students: ";
        std::cin>>n;
        if(n<=0 or n>50){
            std::cout<<"Please enter number only ranging from 1-50."<<std::endl;
        }
        else{
            break;
        }
    }
    std::cout<<"Input the data for each student.."<<std::endl;
    for(int i = 0; i<n; i++)
    {
        std::cout<<"Enter NIM of the student number "<<i+1<<": ";
        std::cin>>theData[i].NIM;
        std::cout<<"Enter UTS Score for student number "<<i+1<<": ";
        std::cin>>theData[i].UTS;
        std::cout<<"Enter UAS Score for student number "<<i+1<<": ";
        std::cin>>theData[i].UAS;
        theData[i].average = (theData[i].UTS + theData[i].UAS)/2;
    }
    std::cout<<"Here are the average score for each student..."<<std::endl;
    for(int i = 0;i<n;i++)
    {
        std::cout<<"For student with NIM: "<<theData[i].NIM<<std::endl;
        std::cout<<"Average Score: "<<theData[i].average<<std::endl;
    }
   
    return 0;
}
