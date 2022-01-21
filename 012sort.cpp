#include<iostream>
using namespace std;
void p(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";}
    cout<<endl;}
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;}
void sort(int *a,int n){
    int i=0,j=0,k=0;
    for(int l=0;l<n;l++){
        if(a[l]==0){
            i++;}else if(a[l]==1){
            j++;}else{
            k++;}
    }
    int temp[n];
    for(int aa=0;aa<n;aa++){
        while(i>0){
        temp[aa]=0;
        aa++;i--;}
        while(j>0){
        temp[aa]=1;
        aa++;j--;}
        while(k>0){
        temp[aa]=2  ;
        aa++;k--;}
    }
    p(temp,n);
}
void sort2(int *a,int n){
    int l=0,m=0,h=n-1;
    while(m<=h){
    if(a[m]==0){
        swap(a[m],a[l]);
        l++;m++;
    }else if(a[m]==1){
        m++;
        }else{
        swap(a[h],a[m]);
        h--;}
    }
}
int main(){
    // int n=7;
    int a[]={0,1,2,2,1,0,2,1,2,0,2,2,1,2,1,0,1,2,};
    int n= sizeof(a)/sizeof(a[0]);
    p(a,n);
    sort(a,n);
    p(a,n);
    sort2(a,n);
    p(a,n);
    return 0;
}