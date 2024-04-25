#include <iostream>
using namespace std;
int main() {
	int n; int res = 0;
	cin >> n;
	string temp = {"abc"};

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s != temp)
			res++;
	 temp = s;
		if (i == 0)
			continue;
		
	}
	cout << res;
}