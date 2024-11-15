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

void changeNameByValue(std::vector<Student>& data, int targetValue, std::string& newName) {
    for (Student& s : data) {
        if (s.value == targetValue) {
            s.name = newName;
        }
    }
}

bool testCasePassed(std::vector<Student>& data, int targetValue, std::string& expectedName) {
    for (const Student& s : data) {
        if (s.value == targetValue && s.name != expectedName) {
            return false;
        }
    }
    return true;
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

    int targetValue1 = 60;
    std::string newName1 = "Joko";
    changeNameByValue(data, targetValue1, newName1);
    std::cout << "\nData after changing name to '" << newName1 << "' for Value = " << targetValue1 << ":\n";
    display(data);

    if (testCasePassed(data, targetValue1, newName1)) {
        std::cout << "Test case for Value = " << targetValue1 << " passed.\n";
    } else {
        std::cout << "Test case for Value = " << targetValue1 << " failed.\n";
    }

    int targetValue2 = 65;
    std::string newName2 = "Sigma Skibidi Darryl";
    changeNameByValue(data, targetValue2, newName2);
    std::cout << "\nData after changing name to '" << newName2 << "' for Value = " << targetValue2 << ":\n";
    display(data);

    if (testCasePassed(data, targetValue2, newName2)) {
        std::cout << "Test case for Value = " << targetValue2 << " passed.\n";
    } else {
        std::cout << "Test case for Value = " << targetValue2 << " failed.\n";
    }

    return 0;
}
