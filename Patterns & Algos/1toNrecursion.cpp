#include <iostream>
#include <vector>

std::vector<int> generateArray(int n) {
    if (n == 1) {
        return {1};
    } else {
        std::vector<int> prevArray = generateArray(n - 1);
        prevArray.push_back(n);
        return prevArray;
    }
}

int main() {
    int n = 10;
    std::vector<int> resultArray = generateArray(n);
    for (int num : resultArray) {
        std::cout << num << " ";
    }

    return 0;
}
