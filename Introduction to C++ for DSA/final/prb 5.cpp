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
};
bool com(stdnt l , stdnt r){
    return ((l.eng_marks == r.eng_marks) ? ((l.math_marks == r.math_marks) ? l.id < r.id : l.math_marks > r.math_marks) : (l.eng_marks>r.eng_marks));
    // if(l.eng_marks>r.eng_marks)return true;
    // else if (l.eng_marks < r.eng_marks)return false;
    // else{
    //     return ((l.math_marks == r.math_marks) ? l.id < r.id : l.math_marks > r.math_marks);
    // }
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
