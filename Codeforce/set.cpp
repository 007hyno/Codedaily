#include <iostream>
#include <set>
using namespace std;
void dd(int* a, int n, int* b, int m)  {
        set<int> s;
        for(int i=0;i<n;i++){
        s.insert(a[i]);}
        for(int i=0;i<m;i++){
        s.insert(b[i]);}
    cout<<s.size();}
int main() {
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];}
    for(int i=0;i<m;i++){
        cin>>b[i];}
    dd(a,n,b,m);
    return 0;}