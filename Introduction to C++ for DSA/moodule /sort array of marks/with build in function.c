#include <bits/stdc++.h>
using namespace std;
class student{
    public:
  string nm;
  int rl;
  int mrks;
};
bool cmp(student l , student r){
    if(l.mrks > r.mrks){
        return true;
    }
    else {
        return false;
    }
}
int main() {
	int a;
	cin >> a;
	student arr[a];
	for(int i = 0 ; i<a ; i++){
	    cin >> arr[i].nm >> arr[i].rl >> arr[i].mrks ;
	}
    sort(arr,arr+a,cmp);
    for(int i = 0 ; i<a ; i++){
        arr[i].rl = i+1;
	    cout << arr[i].nm << " "<<  arr[i].rl  << " " << arr[i].mrks << endl ;
	}

}
