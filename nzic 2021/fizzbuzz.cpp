#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int upto;
    cin>>upto;
    for(int i=1;i<upto+1;i++){
        if(i%15==0) cout<<"FizzBuzz"<<endl;
        else if(i%5==0) cout<<"Buzz"<<endl;
        else if(i%3==0) cout<<"Fizz"<<endl;
        else cout<<i<<endl;
    }
}
