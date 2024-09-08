#include <iostream>
using namespace std;

void printFibonacci(int n) {
    if (n <= 0) {
        cout << "Length should be a positive integer." << endl;
        return;
    }

     long a = 0, b = 1; 
    cout << "Fibonacci sequence: ";

    cout << a << " ";  
    if (n > 1) {
        cout << b << " ";  
    }

    for (int i = 2; i < n; i++) {
         long next = a + b;  
        cout << next << " ";
        a = b;  
        b = next;  
    }

    cout << endl;
}

int main() {
    int fibLength;
    cout << "Enter the length of Fibonacci sequence: ";
    cin >> fibLength;

    printFibonacci(fibLength);

    return 0;
}
