#include <iostream>
#include <queue>
using namespace std;

void print(queue<int> q){
    queue<int> copy=q;
    while (!copy.empty()){
        printf("%d",q.front());
        copy.pop();
    }
}

int main(){
    freopen("queuesin.txt","r",stdin);
    freopen("queuesout.txt","w",stdout);
    queue<int> q;
    int c;
    scanf("%d",&c);
    while (c){
        if (c>0){
        q.push(c);
        print(q);
        }
        else {
        q.pop();
        print(q);
    }
    scanf("%d",&c);
    }
    
}