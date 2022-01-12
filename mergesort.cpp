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
                j++;k++;
            }
        }
        while(i<=m){
            temp[k]=a[i];
            i++;k++;
        }
        while(j<=r){
            temp[k]=a[j];
            j++;k++;
        }
        for(int p=l;p<=r;p++){
            a[p]=temp[p];
        }


}
void mergesort(int *a,int l,int r){
    if(l<r){
    int m = (l+r)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
    }
}
int main(){
    int a[8]={6,3,9,5,2,8,7,1};
    int n=8;
    mergesort(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}