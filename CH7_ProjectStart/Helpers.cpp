#include <string>
#include <iostream>

using namespace std;
const int length = 1000;

//----------------------------------------------------------------------

//----------------------------------------------------------------------
int nextRecord(string last[])
{
	for (int i = 0; i < length; i++)
	{
		if (last[i] == "")
			return i;
	}
	return -1;
}

//----------------------------------------------------------------------

//----------------------------------------------------------------------
void Banner(string message)
{
	cout << endl << endl;
	cout << "--------------------------------------------------" << endl;
	cout << "----- " << message << " -----" << endl;
	cout << "--------------------------------------------------" << endl << endl;
}
