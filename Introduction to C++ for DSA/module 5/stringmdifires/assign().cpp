// '=' works like normal assighn, assign function also exist;
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "hellow";
	string s2 = "world";
	s1.assign("gelo");
	s1 = s2;
	cout << s1 << s2 << endl;
	return 0;

}
