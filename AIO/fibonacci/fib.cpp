#include <iostream>
#include <cmath>
using namespace std;

int fib(int n) {
    double phi = (1 + sqrt(5)) / 2;
    return round(pow(phi, n) / sqrt(5));
}
 
int main(){
    freopen("fibin.txt","r",stdin);
    freopen("fibout.txt","w",stdout);
    int n,answer;
    scanf("%d",&n);
    answer=fib(n)%1000;
    printf("%d",answer);
    return 0;
}