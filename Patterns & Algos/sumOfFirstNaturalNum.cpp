#include <iostream>

int sumOfFirstNNaturalNumbers(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + sumOfFirstNNaturalNumbers(n - 1);
    }
}

int main() {
    int n = 10; // You can change this to any positive integer
    int result = sumOfFirstNNaturalNumbers(n);
    std::cout << "Sum of first " << n << " natural numbers is: " << result << std::endl;

    return 0;
}
