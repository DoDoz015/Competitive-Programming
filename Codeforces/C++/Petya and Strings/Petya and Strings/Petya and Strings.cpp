#include <iostream>
#include <cstring>
using namespace std;
int main()
{

	string s1;
	string s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.size(); i++)
	{
		if (s1[i] <= 90 && s1[i] >64)
			s1[i] = s1[i] + 32;
		if (s2[i] <= 90 && s2[i] >64)
			s2[i] = s2[i] + 32;
	}
	cout<< strcmp(s1.c_str(), s2.c_str());
}
