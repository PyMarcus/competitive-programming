#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int value;
	string value2, value3 = "";
	cout << "Hello, world!" << endl;
	cout << "Impression test \n";
	cout << "\tTab for this" << endl;
	
	cin >> value;
	cin.ignore(); // necessário para limpar o buffer e não bugar a entrada
	
	for(int i = 0; i < value; i++)
	{
		getline(cin, value2);		
		cout << value2 << endl;	
	}

	cout << value3;

	return 0;
}
