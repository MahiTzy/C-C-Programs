#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> generateCodingNinjas(int n) {
    if (n == 0) {
        return {};
    } else {
        std::vector<std::string> prevArray = generateCodingNinjas(n - 1);
        prevArray.push_back("coding ninjas");
        return prevArray;
    }
}

int main() {
    int n = 5; // You can change this to any positive integer
    std::vector<std::string> resultArray = generateCodingNinjas(n);

    // Print the generated array
    for (const std::string& str : resultArray) {
        std::cout << str << std::endl;
    }

    return 0;
}
