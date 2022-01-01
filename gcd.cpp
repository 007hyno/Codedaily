#include <iostream>
using namespace std;
int recursiongcd(int a ,int b){
    if(b!=0){
        return recursiongcd(b,a%b);
    }
    return a;
}
int gcd(int a ,int b){
    while(b!=0){
        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Gcd : "<<gcd(a,b)<<endl;
    cout <<"Gcd with recursion : "<<recursiongcd(a,b);
    cout <<endl<<"--END--";
    return 0;
}