#include <bits/stdc++.h>
using namespace std;

class stdnt
{   public:
        string nm;
        int cls;
        char sec;
        int id;
        int math_marks;
        int eng_marks;
        int total_marks;
};
bool com(stdnt l , stdnt r){
    return ((l.total_marks==r.total_marks) ? l.id < r.id : l.total_marks > r.total_marks);
}
int main(){
    int t;
    cin >> t ;
    stdnt s[t];
    for(int i = 0 ; i<t ; i++){
        cin >> s[i].nm 
          >> s[i].cls 
          >> s[i].sec 
          >> s[i].id 
          >> s[i].math_marks 
          >> s[i].eng_marks ;
        s[i].total_marks = s[i].math_marks+s[i].eng_marks;
    }
    sort(s,s+t,com);
    for(int i = 0 ; i<t ; i++){
        cout << s[i].nm 
             << " " << s[i].cls
             << " " << s[i].sec 
             << " " << s[i].id << " " 
             << s[i].math_marks << " " 
             << s[i].eng_marks << endl ;
    }
    
    return 0;
}
