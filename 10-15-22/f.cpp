#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int errors;

    while (n > 0)
    {
        string str;
        string tries;
        cin >> str >> tries;
        errors = tries.length();

        for (int i = 0; i < tries.length(); i++)
        {
            for (int j = 0; j < str.length(); j++)
            {
                if (str[j] == tries[i] && i != j)
                {
                    str.erase(j, 1);
                    if (str.length() == 0)
                        break;
                    errors--;
                }
            }
        }

        cout << "Jogo " << n << endl;

        if (str.length() == 0)
        {
            cout << "ganhou." << endl;
        }
        else if (errors == 7)
        {
            cout << "perdeu." << endl;
        }
        else if (str.length() > 0 && errors < 7)
        {
            cout << "desistiu." << endl;
        }

        cin >> n;
    }

    return 0;
}