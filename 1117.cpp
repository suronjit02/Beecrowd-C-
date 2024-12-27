#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, avg, sum = 0;

    int count = 0;

    while (1)
    {

        cin >> n;
        if (n < 0 || n > 10)
        {
            cout << "nota invalida" << endl;
        }

        else
        {
            sum = sum + n;

            count++;
        }

        if (count == 2)
            break;
    }
    cout << showpoint;
    cout << fixed;
    cout << setprecision(2);
    avg = (sum / 2.00);
    cout << "media = " << avg << endl;

    return 0;
}