#include<iostream>
#include<vector>
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
    int n = 3;
    std::cout<<"For "<<n<<" number of students.. "<<std::endl;
    std::vector<std::string> NIM{"24/532884/PA/22549","24/532690/PA/22569","23/51420/PA/22420"};
    std::vector<double> UTS{100,69.5,15};
    std::vector<double> UAS{99,71,85.5};
    int inputted_student_counter = 0;
    std::vector<double> average_score{};
    for(int i = 0; i<n; i++)
    {
        inputted_student_counter += 1; 
        theData[i].NIM = NIM[i];
        theData[i].UTS = UTS[i];
        theData[i].UAS = UAS[i];
        theData[i].average = (theData[i].UTS + theData[i].UAS)/2;
        average_score.push_back(theData[i].average);
    }
    std::cout<<"Here are the average score for each student..."<<std::endl;
    int outputted_student_counter = 0;
    for(int i = 0;i<n;i++)
    {
        outputted_student_counter += 1;
        std::cout<<"For student with NIM: "<<theData[i].NIM<<std::endl;
        std::cout<<"Average Score: "<<theData[i].average<<std::endl;
    }
    bool average_score_validity = false;
    if(average_score[0] == 99.5 and average_score[1] == 70.25 and average_score[2] == 50.25){
        average_score_validity = true;
    }
    if(inputted_student_counter == 3 and outputted_student_counter == 3 and average_score_validity == true){
        std::cout<<"Test case passed!!";
    }
    return 0;
}
