#include <iostream>
using namespace std;
void bubbles(int *a, int n){
    for(int i=n;i>0;i--){
        for(int j=0;j<i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int binary(int* a,int s,int e,int key){
    int mid = s+(e-s)/2;
    if(a[mid]!=key){
        if(a[mid]>key){
            return binary(a,s,mid-1,key);
        }else if(a[mid]<key){
            return binary(a,mid+1,e,key);
        }
    }else{
        return mid;
    }
}
int main(){
    int a[11]={23,4,3,2,1,6,7,8,10,9,5};
    int n=sizeof(a)/sizeof(a[0]);
    bubbles(a,n);
    int key;
    cin>>key;
    int e = n-1;
    int ans = binary(a,0,e,key);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout << endl;

    cout <<ans;
    cout <<endl<<"END";
    return 0;
}