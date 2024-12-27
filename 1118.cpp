#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double score, sum;
    int count, option;

    do
    {
        sum = 0.0;
        count = 0;

        while (count < 2)
        {
            cin >> score;
            if (score >= 0.0 && score <= 10.0)
            {
                sum = sum + score;
                count++;
            }
            else
            {
                cout << "nota invalida" << endl;
            }
        }

        cout << fixed << setprecision(2);
        cout << "media = " << sum / 2.0 << endl;

        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> option;
        } while (option != 1 && option != 2);

    } while (option != 2);

    return 0;
}