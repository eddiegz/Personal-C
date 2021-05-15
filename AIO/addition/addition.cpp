#include <iostream>

int main() {
    freopen("addin.txt","r",stdin);
    freopen("addout.txt","w",stdout);
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",a+b);
}