#include<iostream>
using namespace std;
void merge(int *a ,int l,int m,int r ){
        int temp[r+1]={0};
        int i=l,j=m+1,k=l;
        while(i<=m&&j<=r){
            if(a[i]<a[j]){
                temp[k]=a[i];
                i++;k++;
            }else{
                temp[k]=a[j];
                j++;k++;}}
        while(i<=m){
            temp[k]=a[i];   
            i++;k++;}
        while(j<=r){
            temp[k]=a[j];
            j++;k++;}
        for(int p=l;p<=r;p++){
            a[p]=temp[p];}}
void mergesort(int *a,int l,int r){
    if(l<r){
    int m = (l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
    }}
void kth(int *a,int l,int r,int k){
    mergesort(a,l,r);
    cout<<a[k+1];
}
int main(){
    int n=7,k=3;
    int a[n]={4,2,4,23,42,34,23};
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    kth(a,0,n,k);
    return 0;
}