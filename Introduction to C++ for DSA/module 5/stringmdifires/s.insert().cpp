// s.insert function insert element in the initial;
// syntax variable name.erase(initial_index,string_i_want_to_insert);
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "hello world";
	string s2 = "monkey";
	s1.insert(6,s2);
	cout << s1 << endl ; 
	return 0;

}
