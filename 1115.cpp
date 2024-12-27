#include <iostream>
using namespace std;

int main()
{
    int x, y;

    while (1)
    {

        cin >> x >> y;

        if (x == 0 || y == 0)
        {
            break;
        }

        if (x > 0 && y > 0)
        {
            cout << "primeiro" << endl;
        }
        else if (x > 0 && y < 0)
        {
            cout << "quarto" << endl;
        }
        else if (x < 0 && y < 0)
        {
            cout << "terceiro" << endl;
        }
        else if (x < 0 && y > 0)
        {
            cout << "segundo" << endl;
        }
    }

    return 0;
}

// 2 2 primeiro
//  3 - 2 quarto
// - 8 - 1 terceiro
// - 7 1 segundo
// 0 2
