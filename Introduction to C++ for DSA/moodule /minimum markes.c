#include <bits/stdc++.h>
using namespace std;
class student{
    public:
  string nm;
  int rl;
  int mrks;
};
int main() {
	int a;
	cin >> a;
	student arr[a];
	for(int i = 0 ; i<a ; i++){
	    cin >> arr[i].nm >> arr[i].rl >> arr[i].mrks ;
	}
	student mn;
    mn.mrks = INT_MAX;
    for(int i = 0 ; i<a ; i++){
        if(mn.mrks > arr[i].mrks){
            mn = arr[i];
        }
    }
    cout << mn.nm << " " << mn.rl<< " " << mn.mrks << " " << endl;

}
