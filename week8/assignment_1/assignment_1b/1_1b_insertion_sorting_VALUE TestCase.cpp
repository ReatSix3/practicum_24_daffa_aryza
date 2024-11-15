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

void insertionSortByValue(std::vector<Student>& data) {
    for (size_t i = 1; i < data.size(); ++i) {
        Student key = data[i];
        int j = i - 1;

        while (j >= 0 and data[j].value < key.value) {
            data[j + 1] = data[j];
            --j;
        }
        data[j + 1] = key;
    }
}

bool isSortedByValue(std::vector<Student>& data) {
    for (size_t i = 0; i < data.size() - 1; ++i) {
        if (data[i].value < data[i + 1].value) {
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

    std::vector<Student> expected = {
        {9960312699, "Handi Ramadhan", 90},
        {9950310962, "Ronaldo Valentino Uneputty", 80},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9952382180, "Ari Lutfianto", 65},
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9965653989, "Arief Budiman", 60},
        {9963959682, "Rio Alfandra", 55}
    };

    std::cout << "Original Data:\n";
    display(data);

    insertionSortByValue(data);
    std::cout << "\nData Sorted by Value (Descending) using Insertion Sort:\n";
    display(data);

    if (isSortedByValue(data)) {
        std::cout << "\nExpected: Sorted in descending order by Value\n";
        std::cout << "Got: Data sorted successfully\n";
        std::cout << "Test case passed.\n";
    } else {
        std::cout << "\nExpected: Sorted in descending order by Value\n";
        std::cout << "Got: Data not sorted correctly\n";
        std::cout << "Test case failed.\n";
    }

    return 0;
}
