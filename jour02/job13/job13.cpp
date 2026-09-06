#include <iostream>

using namespace std;

int main(void)
{
    cout << "  | ";

    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }

    cout << endl;
    cout << "------------------------------------------------------------------------------" << endl;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " | ";

        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }

        cout << endl;
    }

    return 0;
}