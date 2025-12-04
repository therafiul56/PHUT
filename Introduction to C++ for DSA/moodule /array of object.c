#include <bits/stdc++.h>
using namespace std;
class stdnt{
    public: 
  string name;
  int roll;
  int markes;
};
int main() {
	int a;
	cin >> a;
	cin.ignore();
	stdnt arr[a];
    for (int i = 0 ; i< a ; i++){
        getline(cin,arr[i].name);
        cin >>  arr[i].roll >> arr[i].markes;
    }
    for(int i = 0 ; i< a ; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].markes << endl;
    }
    return 0;

}
