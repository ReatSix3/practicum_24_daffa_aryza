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

int binarySearchByNISN(const std::vector<Student>& data, long long targetNISN) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid].nisn == targetNISN) {
            return mid;
        } else if (data[mid].nisn < targetNISN) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return -1;
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

    std::sort(data.begin(), data.end(), [](const Student& a, const Student& b) {
        return a.nisn > b.nisn; 
    });

    std::cout << "Sorted Data by NISN:\n";
    display(data);

    long long searchNISNs[] = {9950310962, 9960312699};
    for (long long searchNISN : searchNISNs) {
        int index = binarySearchByNISN(data, searchNISN);
        if (index != -1) {
            std::cout << "\nBinary Search: Found Student with NISN " << searchNISN << ".\n";
            std::cout << "Name: " << data[index].name << ", Value: " << data[index].value << '\n';
        } else {
            std::cout << "\nBinary Search: Student with NISN " << searchNISN << " not found.\n";
        }
    }

    return 0;
}
