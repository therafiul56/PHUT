// itaratords of  string str.begin(),str.end();f
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "hello world";
	string s2 = "monkey";
	for(auto it = s1.begin(); it <s1.end(); it++){
	    cout << *it << endl;
	}
	cout << s1 << endl ; 
	return 0;

}
