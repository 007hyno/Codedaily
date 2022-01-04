#include<iostream>
using namespace std;
void pi(string s){
        // cout<<s[0]<<endl;
    if(s.length()==0){
        return ;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
        s=s.substr(2);
        // s="3.14"+s;
        pi(s);
    }else{
        cout<<s[0];   
        s=s.substr(1);
        pi(s);
    }
}
int main(){
pi("ppipppippippippi");
    return 0;
}