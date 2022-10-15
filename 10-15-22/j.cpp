#include <iostream>

using namespace std;

int main()
{
    int n;
    string str;
    cin >> n;
    cin.ignore();
    getline(cin, str);

    for (int i = 0; i < n; i++)
    {
        cout << str << endl;
    }

    return 0;
}