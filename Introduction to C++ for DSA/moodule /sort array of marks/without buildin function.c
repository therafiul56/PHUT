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
    for(int i = 0 ; i<a ; i++){
        for(int j =i+1 ; j<a ; j++){
            if(arr[i].mrks<arr[j].mrks){
                student temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            arr[i].rl = i+1;
        }
    }
    for(int i = 0 ; i<a ; i++){
	    cout << arr[i].nm << " "<<  arr[i].rl << " " << arr[i].mrks << endl ;
	}

}
