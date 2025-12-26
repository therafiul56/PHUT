#include <bits/stdc++.h>

using namespace std;

bool chek () {
    int a;
    cin >> a;
    int arr[a];
    for(int i = 0 ; i<a ; i++) {
        cin >> arr[i];
    }
    for (int i = 0 ; i<a-1 ; i++){
        for (int j=i+1 ; j<a ; j++){
            if(arr[i] == arr[j]){
                return true ;    
            }
            
        }
    }
    return false;
}

int main()
{
    cout << ((chek() ? "YES" : "NO")) ;
    

    return 0;
}
