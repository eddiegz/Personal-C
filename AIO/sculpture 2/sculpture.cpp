#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define ff first
#define ss second
#define pll pair<ll,ll>
//#define DEBUG

// using a priority queue to do all the processing

const int MAXN=1e6+5;
ll height[MAXN];
ll n,ans;
ll cuheight;
ll to;

void solve();

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    #ifndef DEBUG
    freopen("artin.txt","r",stdin);
    freopen("artout.txt","w",stdout);
    #endif
    solve();
}

void solve(){
    cin>>n;
    ll index=1;
    priority_queue<pll,vector<pll>> line;
    while(n--){
        ll t,w,h;
        cin>>t>>w>>h;
        if(line.empty()){
            height[t]=h;
            ans=max(ans,height[t]);
            line.push({h,t-1+w});
        }
        else{
            cuheight=line.top().ff;to=line.top().ss;bool none=false;
            while(to<t){
                if(line.empty()){
                    none=true;
                    break;
                }
                line.pop();
                cuheight=line.top().ff;to=line.top().ss;
            }
            if(none){
                height[t]=h;
                ans=max(ans,height[t]);
                line.push({h,t-1+w});
            }
            else{
                cuheight+=h;
                ans=max(ans,cuheight);
                height[t]=cuheight;
                line.push({cuheight,t-1+w});
            }
        }
    }
    cout<<ans<<endl;
}