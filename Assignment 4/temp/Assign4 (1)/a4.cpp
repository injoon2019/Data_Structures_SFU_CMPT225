/*301374509 ison Injun Son\n
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
#include <iostream>
#include <list>
#include <fstream>
using namespace std;

int main() {

	ifstream inputFile;
	inputFile.open("sample1.txt");    // change the file name if you want to test other files.
	int x;
	bool List2 = false;
	list<int> list1;
	list<int> list2;
	//inputFile >> x;
	//cout<<"check1 "<<x<<endl;	//check
	while (inputFile>>x) {
		if (x == 0) {
			List2 = true;
		}

		//cout<<"check2 "<<x<<endl;	//check
		if (List2 == true)
		{
			if (x != 0)
				list2.push_front(x);
		}
		else
		{
			if (x != 0)
				list1.push_front(x);
		}
	}
	inputFile.close();
	list1.sort();
	list2.sort();
	int list1Length = list1.size();
	int list2Length = list2.size();
	bool IsThere = false;

	for (int i = 0; i < list2Length; i++)
	{
		list1.remove(list2.front());
		list2.remove(list2.front());
	}

	if (list1.back())
	{
		cout << "301374509 ison Injun Son\n";
		cout << list1.back();
		IsThere = true;
	}
	if (IsThere == false)
	{
		cout << "301374509 ison Injun Son\n";
		cout << "NONE";
	}
	cout << endl;

}