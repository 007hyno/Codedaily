#include<iostream>
using namespace std;
long long maxSum(int *a, int n){
        int m = 0,c=0;
        for(int i =0;i<n;i++){
            c+=a[i];
            if(c>m){
                m=c;
            }if(c<0){
                c=0;}}
        return m;
    }
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int nn=maxSum(a,n);
    cout<<nn<<endl;
    return 0;
}