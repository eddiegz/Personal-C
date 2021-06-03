#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("promote.in","r",stdin);
    freopen("promote.out","w",stdout);
    int ba,bb,sa,sb,ga,gb,pa,pb;
    cin>>ba>>bb>>sa>>sb>>ga>>gb>>pa>>pb;
    int tp=pb-pa;ga-=tp;
    int tg=gb-ga;sa-=tg;
    int ts=sb-sa;
    cout<<ts<<endl;
    cout<<tg<<endl;
    cout<<tp<<endl;
}