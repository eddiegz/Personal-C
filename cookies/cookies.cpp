#include <iostream>

int first(int d,int c0, int p1, int c1, int p2, int c2){
    int day,left,vel,total;
    if (p1%c0!=0){
        day=p1/c0+1;
    }
    else{
        day=p1/c0;
    }
    left=(day*c0)-p1;
    vel=c0+c1;
    d-=day;
    total=(d*vel)+left;
    return total;
}

int second(int d,int c0, int p1, int c1, int p2, int c2){
    int day,left,vel,total;
    if (p2%c0!=0){
        day=p2/c0+1;
    }
    else{
        day=p2/c0;
    }
    left=(day*c0)-p2;
    vel=c0+c2;
    d-=day;
    total=(d*vel)+left;
    return total;
}

int both1(int d,int c0, int p1, int c1, int p2, int c2){
    int day,left,vel,total;
    if(p2%c0!=0){
        day=p2/c0+1;
    }
    else{
        day=p2/c0;
    }
    left=(day*c0)-p2;
    vel=c0+c2;
    d-=day;
    p1-=left;
    if (p1%vel!=0){
        day=(p1/vel)+1;
    }
    else{
        day=p1/vel;
    }
    d-=day;
    total=(d*vel)+left;
    return total;
}

int both2(int d,int c0, int p1, int c1, int p2, int c2){
    int day,left,vel,total;
    if(p1%c0!=0){
        day=p1/c0+1;
    }
    else{
        day=p1/c0;
    }
    left=(day*c0)-p1;
    vel=c0+c1;
    d-=day;
    p2-=left;
    if (p2%vel!=0){
        day=(p2/vel)+1;
    }
    else{
        day=p2/vel;
    }
    d-=day;
    total=(d*vel)+left;
    return total;
}


int main(){
    freopen("cookiesin.txt","r",stdin);
    freopen("cookiesout.txt","w",stdout);
    int d,c0,p1,c1,p2,c2,best;
    scanf("%d%d%d%d%d%d",&d,&c0,&p1,&c1,&p2,&c2);
    int sol1,sol2,sol3,sol4,sol5;
    sol1=d*c0;
    sol2=first(d,c0,p1,c1,p2,c2);
    best=std::max(sol1,sol2);
    sol3=second(d,c0,p1,c1,p2,c2);
    best=std::max(best,sol3);
    sol4=both1(d,c0,p1,c1,p2,c2);
    best=std::max(best,sol4);
    sol5=both2(d,c0,p1,c1,p2,c2);
    best=std::max(best,sol5);
    printf("%d", best);
}