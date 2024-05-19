#include <iostream>
#include <vector>

std::vector<int> generateReverseArray(int n) {
    if (n == 0) {
        return {};
    } else {
        std::vector<int> prevArray = generateReverseArray(n - 1);
        prevArray.push_back(n);
        return prevArray;
    }
}

int main() {
    int n = 5; // You can change this to any positive integer
    std::vector<int> resultArray = generateReverseArray(n);

    // Print the generated array in reverse order (from N to 1)
    for (int i = resultArray.size() - 1; i >= 0; --i) {
        std::cout << resultArray[i] << " ";
    }

    return 0;
}
