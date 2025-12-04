#include <bits/stdc++.h>
using namespace std;

class stdnt
{   public:
        string nm;
        int cls;
        char sec;
        int id;
};
int main(){
    int t;
    cin >> t ;
    stdnt s[t];
    for(int i = 0 ; i<t ; i++){
        cin >> s[i].nm >> 
               s[i].cls>> 
               s[i].sec>> 
               s[i].id ;
    }
    for(int i = 0 ,j=t-1 ; i<j ; i++,j--){
        swap(s[i].sec,s[j].sec);
    }
    for(int i = 0 ; i<t ; i++){
        cout << s[i].nm << " " 
             << s[i].cls<< " " 
             << s[i].sec<< " " 
             << s[i].id << " "  
             << endl ;
    }
    
    return 0;
}
