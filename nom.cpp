#include<iostream>
using namespace std;
void sor(char *a,int n){
    
}

 int main(){
     
     char c = 'a';
    //   string cc[] = {'Blue', 'Red','Orange', 'Yellow' };
    char cc[4][10] = { "blue", "red", "orange",
                           "yellow" };
    for(int i=0;i<4;i++){
            string ti = cc[i];
        for(int j=0;j<4;j++){
            string tj = cc[j];
            int t1 = ti[0];
            int t2 = tj[0];
            // cout<<"c - "<<c<<"  t - "<<t<<"  t[]- "<<t[0]<<endl;
            cout<< cc[j] <<endl;
            if(t1>t2){
                string temp = cc[j];
                // cc[j] = cc[i];
                // cc[i] = temp;
            }
        }
        c++;
    }

    //  int n;
    //  cin>>n;
    //  char s[n];
    //  for(int i=0;i<n;i++){
    //      cin>>s[i];
    //  }
    //  sor(s,n);
     

     return 0;
 }