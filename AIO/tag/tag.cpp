#include <bits/stdc++.h>
using namespace std;

bool binary(int arr[], int l, int r, int x){
    if (r>=1){
        int mid=l+(r-l)/2;
        if (arr[mid]==x){
            return true;
        }
        else if (arr[mid]>x){
            return binary(arr,l,mid-1,x);
        }
        else {
            return binary(arr,mid+1,r,x);
        }
    }
    else{
        return false;
    }
}

int al[100000]={1};
int bl[100000]={2};
int main(){
    freopen("tagin.txt","r",stdin);
    freopen("tagout.txt","w",stdout);
    int n,m,a,b,ta=1,tb=1;
    scanf("%d%d",&n,&m);
    for (int i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        if (binary(al,0,ta+1, a)){
            al[ta]=b;
            ta+=1;
        }
        else{
            bl[tb]=b;
            tb+=1;
        }
    }
    printf("%d%c%d",ta,' ',tb);
}