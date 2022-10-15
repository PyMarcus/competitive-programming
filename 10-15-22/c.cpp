#include <iostream>

using namespace std;

int main()
{
    string str;
    cin >> str;

    if (str == "amarela" || str == "vermelha" || str == "azul")
    {
        cout << "primaria" << endl;
    }
    else if (str == "laranja" || str == "verde" || str == "roxa")
    {
        cout << "secundaria" << endl;
    }
    else
    {
        cout << "outra" << endl;
    }

    return 0;
}