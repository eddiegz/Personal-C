#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, sz, towers=0;
    cin >> n;
    multiset<int> ms;
    while(n--){
        cin >> sz;
        auto it = ms.upper_bound(sz);
        if(it != ms.end()){
            ms.erase(it);
            ms.insert(sz);
        } 
        else{
            towers++;
            ms.insert(sz);
        }
    }
    cout<<towers<<endl;
}