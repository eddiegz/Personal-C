#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int n,m,sum,diff,pro,b,s; cin>>n>>m;
    pro=n*m;
    sum=n+m;
    b=max(n,m);
    s=min(n,m);
    diff=b-s;
    cout<<max(pro,sum,diff);

}