#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
}
void p(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void neg(int *a,int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    int a[]= {-12, 11, -13, -5,6, -7, 5, -3, 11};
    // int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n=sizeof(a)/sizeof(a[0]);
    p(a,n);
    neg(a,n);
    p(a,n);
    return 0;
}