// s.replace function deletes element after the parameter
// syntax variable name.erase(initial,size_iwanto_replace,string_of_replace);
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "hello world";
	string s2 = "monkey";
	s1.replace(6,5,s2);
	cout << s1 << endl ; 
	return 0;

}
