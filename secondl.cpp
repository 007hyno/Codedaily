#include<iostream>
using namespace std;
void largest(int *a,int n ,int t){
    int l = 0;
    for(int i=0;i<n;i++){
        if(a[i]>a[l]){
            l=i;
        }
    }
    if(t==2){
        cout<<a[l]<<endl;
    }
    a[l]=-999999;
}
int main(){
    int a[]={5,3,6,34,5,546,45},n=7;
    largest(a,n,1);
    largest(a,n,2);
    return 0;
}