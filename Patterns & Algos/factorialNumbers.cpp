#include <iostream>
#include <vector>

int factorial(int num) {
    if (num <= 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

void generateFactorialNumbers(int n, std::vector<int>& result, int current) {
    if (current <= n) {
        result.push_back(current);
        generateFactorialNumbers(n, result, current * (result.size() + 1));
    }
}

std::vector<int> factorialNumbers(int n) {
    std::vector<int> result;
    generateFactorialNumbers(n, result, 1);
    return result;
}

int main() {
    int n = 100; // You can change this to any positive integer
    std::vector<int> resultArray = factorialNumbers(n);

    // Print the sorted array containing factorial numbers less than or equal to n
    std::cout << "Factorial numbers less than or equal to " << n << ": ";
    for (int num : resultArray) {
        std::cout << num << " ";
    }
    
    std::cout << std::endl;

    return 0;
}
