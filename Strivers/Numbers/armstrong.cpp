#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;
    cin >> num;

    if (num < 0) {
        cout << "Not an Armstrong number";
        return 0;
    }

    int count = 0;
    int temp = num;

    if (temp == 0)
        count = 1;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    int sum = 0;
    temp = num;

    while (temp != 0) {
        int rem = temp % 10;
        sum += round(pow(rem, count));
        temp /= 10;
    }
    cout << "count = " << count << endl;
cout << "sum = " << sum << endl;

    if (sum == num)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}