
#include <iostream>
#include <set>
#include <map>

using namespace std;

template <typename type>
struct mycomp {
	bool operator() (const type & first, const type & second) const {
		return first > second;
	}
};


int main()
{
	map<int, string, mycomp<int>> mymap;
	mymap[10]="abc", mymap[30]="def", mymap[20]="xyz";
	for (auto& elem : mymap) {
		cout << elem.first << " - " << elem.second << endl;
	}

	cout << endl;


	set<int, less<int>> myset;

	myset.insert(40), myset.insert(20), myset.insert(30);
	for (auto& elem : myset) {
		cout << elem << " - " <<endl;
	}
	cout << endl;
	set<int, greater<int>> mysetg;

	mysetg.insert(40), mysetg.insert(20), mysetg.insert(30);
	for (auto& elem : mysetg) {
		cout << elem << " - " << endl;
	}

	cout << endl;
	set<pair <int, int>, mycomp<pair<int,int>>> mysetp;

	mysetp.insert({40,10}), mysetp.insert({20,200}), mysetp.insert({30,250});
	for (auto& elem : mysetp) {
		cout << elem.first << " - " << elem.second <<endl;
	}

	cout << endl;
system("pause");
return 0;
}