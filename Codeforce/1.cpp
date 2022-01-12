#include<iostream>
using namespace std;

void ss(int a[][3],int n,int c){
    int temp = 0;
    int ar[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
        ar[i]+=a[j][i];
        // cout<<"ar- "<<ar[i]<<" , ";
        }
    }
    int ans = 0;
    for(int i =0;i<n;i++){
        ans+=ar[i];
        cout<<"Ans - "<<ans<<" , ";
    }
    if(ans==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}

int main(){
    int n;
    cin>>n;
    // int a[3][3]={{3, -1, 7},{-5, 2, -4},{2, -1 ,-3}};
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
     ss(a,n,n);

    return 0 ;}