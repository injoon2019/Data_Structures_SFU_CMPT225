#include <iostream>
#include <list>
using namespace std;

int main() {

	int x;
	bool List2 = false;
	list<int> list1;
	list<int> list2;
	cin >> x;
	while (!cin.eof()) {
		if (x == 0) {
			List2 = true;
		}

		cin >> x;
		if (List2 == true)
		{
			if(x !=0)
				list2.push_front(x);
		}
		else
		{
			if( x!= 0)
			list1.push_front(x);
		}
	}
	list1.sort();
	list2.sort();
	int list1Length = list1.size();
	int list2Length = list2.size();
	bool IsThere = false;
	for (int i = 0; i < list1Length; i++)
	{
		if (list1.back() != list2.back())
		{
			cout << "301374509 ison Injun Son\n";
			cout << list1.back();
			IsThere = true;
			break;
		}
		else
		{
			list1.remove(list1.back());
			list2.remove(list2.back());
		}
	}
	if (IsThere == false)
	{
		cout << "301374509 ison Injun Son\n";
		cout << "NONE";
	}
	cout << endl;

}