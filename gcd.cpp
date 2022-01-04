        int temp = a%b;
        a=b;
        b=temp;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"Gcd : "<<gcd(a,b)<<endl;
    cout <<"Gcd with recursion : "<<recursiongcd(a,b);
    cout <<endl<<"--END--";
    return 0;
}