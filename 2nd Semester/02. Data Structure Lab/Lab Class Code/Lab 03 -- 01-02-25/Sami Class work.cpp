#include <iostream>
#include <vector>

void insertSorted(std::vector<int>& arr, int value) {
    int i = arr.size() - 1;
    arr.push_back(0);
    while (i >= 0 && arr[i] > value) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = value;
}

int main() {
    std::vector<int> arr = {23, 33, 56, 80, 120};
    int newValue;
    std::cout << "Enter a value to insert: ";
    std::cin >> newValue;
    insertSorted(arr, newValue);
    std::cout << "Updated Array: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}