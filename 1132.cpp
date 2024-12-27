#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (i % 13 != 0)
            sum += i;
    }
    cout << sum << endl;

    return 0;
}
// Print the sum of all numbers between X and Y
// not divisible by 13, including them if it is the case.