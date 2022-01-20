#include<iostream>
using namespace std;
int partition(int *a,int s,int e){
    int pivot =  a[e];
    int pi = s;
    for(int i=s;i<e;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pi]);   
            pi++;   
        }
        swap(pivot,a[pi]);
    }
    return pi;
}
void swap(int &a ,int *b){
    int n1 = a;
    int n2 = *b;
    int temp = n1;
    n1=n2;
    n2=temp;
}
void qc(int *a,int s, int e){
    if(s<e){
    int  p = partition(a,s,e);
    cout<<"P- "<<p<<endl;
        qc(a,s,p-1);
        qc(a,p+1,e);
    }
}
int main(){
    int a[]={7,9,3,2,6};
    int n=sizeof(a)/sizeof(a[0]);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        qc(a,0,n);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    return 0;
}