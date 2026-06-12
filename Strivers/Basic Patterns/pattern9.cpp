#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter number of rows";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
    for (int j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * a - 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}