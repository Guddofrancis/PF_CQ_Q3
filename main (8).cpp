#include <iostream>
using namespace std;

// Function to calculate sum from `first` to `last`
int sum_from_to(int first, int last) {
    int sum = 0;
    for (int i = first; i <= last; ++i) {
        sum += i;
    }
    return sum;
}

// Helper function to find the Greatest Common Divisor (GCD)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to reduce the fraction
int reduce(int &num, int &denom) {
    if (num <= 0 || denom <= 0) return 0; // Failure case
    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;
    return 1; // Success case
}

int main() {
    // Example usage of sum_from_to
    int start = 1, end = 10;
    cout << "Sum from " << start << " to " << end << " is: " << sum_from_to(start, end) << endl;

    // Example usage of reduce
    int num = 4, denom = 8;
    if (reduce(num, denom)) {
        cout << "Reduced fraction: " << num << "/" << denom << endl;
    } else {
        cout << "Reduction failed." << endl;
    }

    return 0;
}
