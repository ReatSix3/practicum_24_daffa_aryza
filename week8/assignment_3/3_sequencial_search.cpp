#include <iostream>
#include <vector>
#include <algorithm>

struct Student {
    long long nisn;
    std::string name;
    int value;
};

void display(std::vector<Student> data) {
    for (Student s : data) {
        std::cout << "NISN: " << s.nisn << ", Name: " << s.name << ", Value: " << s.value << '\n';
    }
}

void changeNameByValue(std::vector<Student>& data, int targetValue, const std::string& newName) {
    for (Student& s : data) {
        if (s.value == targetValue) {
            s.name = newName; 
        }
    }
}

int main() {
    std::vector<Student> data = {
        {9960312699, "Handi Ramadhan", 90},
        {9963959682, "Rio Alfandra", 55},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9965653989, "Arief Budiman", 60}
    };

    std::cout << "Original Data:\n";
    display(data);

    int targetValue = 60;
    std::string newName = "Joko";
    changeNameByValue(data, targetValue, newName);
    std::cout << "\nData after changing name to '" << newName << "' for Value = " << targetValue << ":\n";
    display(data);

    return 0;
}
