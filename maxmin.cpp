#include<iostream>
using namespace std;
void p(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void maxmin(int *a,int n,int* l, int* g){
    for(int i=0;i<n;i++){
        if(a[i]<*l){
            *l=a[i];
        }else if(a[i]>*g){
            *g=a[i];
        }
    }
}
int main(){
    int a[]={ 1000, 11, 445,1, 330, 3000 };
    int l=a[0],g=a[0];
    int n = sizeof(a)/sizeof(a[0]);
    p(a,n);
    cout<<l<<" - "<<g<<endl;
    maxmin(a,n,&l,&g);
    cout<<l<<" - "<<g<<endl;
    return 0;
}