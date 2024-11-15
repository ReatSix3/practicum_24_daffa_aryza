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

void selectionSortByNISN(std::vector<Student>& data) {
    for (size_t i = 0; i < data.size() - 1; ++i) {
        size_t maxIdx = i;
        for (size_t j = i + 1; j < data.size(); ++j) {
            if (data[j].nisn > data[maxIdx].nisn) {
                maxIdx = j;
            }
        }
        std::swap(data[i], data[maxIdx]);
    }
}

bool isSortedByNISN(const std::vector<Student>& data) {
    for (size_t i = 0; i < data.size() - 1; ++i) {
        if (data[i].nisn < data[i + 1].nisn) {
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
        {9970272750, "Achmad Yaumil Fadjri R.", 60},
        {9970293945, "Alivia Rahma Pramesti", 70},
        {9965653989, "Arief Budiman", 60},
        {9963959682, "Rio Alfandra", 55},
        {9960312699, "Handi Ramadhan", 90},
        {9952382180, "Ari Lutfianto", 65},
        {9950310962, "Ronaldo Valentino Uneputty", 80}
    };

    std::cout << "Original Data:\n";
    display(data);

    selectionSortByNISN(data);
    std::cout << "\nData Sorted by NISN (Descending) using Selection Sort:\n";
    display(data);

    if (isSortedByNISN(data)) {
        std::cout << "\nExpected: Sorted in descending order by NISN\n";
        std::cout << "Got: Data sorted successfully\n";
        std::cout << "Test case passed.\n";
    } else {
        std::cout << "\nExpected: Sorted in descending order by NISN\n";
        std::cout << "Got: Data not sorted correctly\n";
        std::cout << "Test case failed.\n";
    }

    return 0;
}
