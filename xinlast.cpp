#include<iostream>
using namespace std;
void xinl(string s){
    if(s.length()==0){
        return;
    }
    else{
        if(s[0]=='x'){
            s=s.substr(1);
            xinl(s);
        cout<<"x";
        }else{
        cout<<s[0];
        s=s.substr(1);
            xinl(s);
        }
    }
}
int main(){
//xaxsaxax
//asaaxxxx
string s = "xaxsaxax";
xinl(s);
    return 0;
}