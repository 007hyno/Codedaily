#include<iostream>
using namespace std;
int gcd(int a,int b){
if(b!=0){
    int temp = a%b;
    a=b;
    b=temp;
    return(gcd(a,b));
}
    return a;
}
int main(){

int a,b,c;
cin>>a>>b>>c;
cout<<gcd(c,gcd(a,b))<<endl;
    return 0;
}