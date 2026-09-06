#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string tab[5] = {"radar", "hello", "level", "stats", "world"};

    for (int i = 0; i < 5; i++)
    {
        bool palindrome = true;

        for (int j = 0; j < tab[i].length() / 2; j++)
        {
            if (tab[i][j] != tab[i][tab[i].length() - 1 - j])
            {
                palindrome = false;
                break;
            }
        }

        if (palindrome)
        {
            cout << tab[i] << " est un palindrome." << endl;
        }
    }

    return 0;
}