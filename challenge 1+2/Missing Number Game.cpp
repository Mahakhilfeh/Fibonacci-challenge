#include <iostream>
#include <set>
using namespace std;

void seqofnumber(int min, int max) {

    if (min > max) {
        cout << "Invalid range. Minimum should be less than or equal to maximum." << endl;
        return;
    }

    int size = max - min + 1;
    int* seq = new int[size];

    // fill matrix in numbers from min to max
    for (int i = 0; i < size; i++) {
        seq[i] = min + i;
    }

    cout << "Please enter a series of numbers between " << min << " and " << max << " (type -1 to end input):" << endl;

    set<int> numbers;
    int number;

    while (cin >> number && number != -1) {
        if (number >= min && number <= max) {
            numbers.insert(number);
        }
        else {
            cout << "Number out of range. Please enter a number between " << min << " and " << max << "." << endl;
        }
    }

    // find missing numbers 
    cout << "Missing numbers: ";
    for (int i = min; i <= max; i++) {
        if (numbers.find(i) == numbers.end()) {
            cout << i << " ";
        }
    }
    cout << endl;

    delete[] seq;
}

int main() {
    int min, max;
    cout << "Enter the minimum and maximum values: ";
    cin >> min >> max;
    seqofnumber(min, max);

    return 0;
}
