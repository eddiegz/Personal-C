#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("antsin.txt","r",stdin);
    freopen("antsout.txt","w",stdout);
    int d,answer=0,p,c;
    scanf("%d%d",&d,&p);
    bool index=false;
    for (int i=0;i<d-1;++i){
        scanf("%d",&c);
        if (c>p){
            index=true;
            if (i==d-2){
                answer+=1;
            }
        }
        else {
            if (index==true){
                answer+=1;
            }
            index=false;
        }
    p=c;
    }
    printf("%d",answer);
}