#include<iostream>
using namespace std;
void p(int *a, int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";}cout<<endl;}
void first(int *a, int n, int r){
    int t[r];
    for (int i=0;i<r;i++){
        t[i]=a[i];
    }
    for(int i=0;i<n;i++){
        if(i<n-r){
            a[i]=a[i+r];
        }else{
            a[i]=t[i-(r+1)];
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
            cout<<endl;
}
void second(int *a, int n, int r){
    for(int j=0;j<r;j++){
            int temp = a[0];
        for(int i=0;i<n;i++){
            if(i==n-1){
                a[i]=temp;
            }else{
                a[i]=a[i+1];
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;
}
int gcd(int a,int b){
    if(b==0){
        return a;
     }else{
        return gcd(b,a%b);
    }}
void juggling(int *a ,int n ,int r){
    int g = gcd(r,n);
    int d;
    cout<<"g - "<<g<<endl;
    //number of cycles
    for(int l=0;l<g;l++){
        int i=l;    
        int temp = a[i];
        while(1){
           d=(i+r)%n;
           if(l==d){
               break;
           }
           a[i]=a[d];
           i=d;}
        a[i]=temp;}}
int main (){
    int a[]={1,2,3,4,5,6,7},n=7,r=3;
    p(a,n);
    // first(a,n,r);
    // second(a,n,r);
    juggling(a,n,r);
    p(a,n);
    return 0;
}