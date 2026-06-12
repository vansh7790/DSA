#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int rev = 0;
    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        if (rev > INT_MAX || rev < INT_MIN)
        {
            cout << "0";
            return 0;
        }
        num = num / 10;
    }
    cout << rev;
    return 0;
}