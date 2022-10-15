#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool nice = true;

    string hashs[n];

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        hashs[i] = str;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                if (hashs[i] == hashs[j])
                {
                    nice = false;
                    break;
                }
            }
        }
    }

    if (nice)
    {
        cout << "A funcao eh boa." << endl;
    }
    else
    {
        cout << "A funcao nao eh boa." << endl;
    }

    return 0;
}