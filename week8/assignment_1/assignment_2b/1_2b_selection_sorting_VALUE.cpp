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

void selectionSortByValue(std::vector<Student>& data) {
    for (size_t i = 0; i < data.size() - 1; ++i) {
        size_t maxIdx = i;
        for (size_t j = i + 1; j < data.size(); ++j) {
            if (data[j].value > data[maxIdx].value) {
                maxIdx = j;
            }
        }
        std::swap(data[i], data[maxIdx]);
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

    selectionSortByValue(data);
    std::cout << "\nData Sorted by Value (Descending) using Selection Sort:\n";
    display(data);

    return 0;
}
