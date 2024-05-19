#include<iostream>
using namespace std;

int sumOfAllDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++) {
            if (i % j == 0) {
                if (i / j == j) {
                    sum += j;
                } else {
                    sum += j + (i / j);
                }
            }
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    int result = sumOfAllDivisors(n);
    cout << result << endl;
    return 0;
}
