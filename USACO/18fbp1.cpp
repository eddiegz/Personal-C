#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,x,y;
    freopen("teleport.in","r",stdin);
    freopen("teleport.out","w",stdout);
    scanf("%d%d%d%d",&a,&b,&x,&y);
    int answer=min(abs(a-b),abs(a-x)+abs(y-b));
    answer=min(answer,abs(a-y)+abs(x-b));
    printf("%d",answer);
}