#include <bits/stdc++.h>
using namespace std;
using ll=long long;
using pii=pair<int,int>;
#define ff first
#define ss second
//#define DEBUG

const int MAXN=1e5+5;

bool done[MAXN];
priority_queue<pii,vector<pii>,greater<pii>> order;
ll ans=0;ll ind=1;
ll b,n;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("tennisin.txt","r",stdin);
    freopen("tennisout.txt","w",stdout);
    #endif
    int t=1;
    while(t--){
        solve();
    }
}

void solve(){
    cin>>b>>n;
    for(int i=1;i<=b;++i){
        int a;cin>>a;
        order.push({a,i});
    }
    ll length=b,available=b,initial=0;
    while(1){
        if(n<=0)break;
        auto ch=order.top().ff,ind=order.top().ss;
        vector<int> to_go;
        to_go.push_back(ind);
        ll level=1;
        order.pop();
        while(true){
            if(!order.empty()&&order.top().ff==ch){
                to_go.push_back(order.top().ss);
                order.pop();
                level++;
            }
            else{
                break;
            }
        }
        length-=level;
        if((ch-initial)*available<n){
            n-=(ch-initial)*available;
            available-=level;
            initial=ch;
            for(int ele:to_go){
                done[ele]=true;
            }
        }
        else{
            ll time=n/available;
            if(time>0){
                if(n%available>0){
                    n-=time*available;
                    for(int i=1;i<=b;++i){
                        if(!done[i]){
                            n--;
                        }
                        if(n==0){
                            ans=i;
                            break;
                        }
                    }
                }
                else{
                    for(int i=b;i>=1;--i){
                        if(!done[i]){
                            ans=i;
                            n=0;
                            break;
                        }
                    }
                }
            }
            else{
                for(int i=1;i<=b;++i){
                    if(!done[i]){
                        n--;
                    }
                    if(n==0){
                        ans=i;
                        break;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}