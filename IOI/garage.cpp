#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using ull = unsigned long long;
using str = string;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>; 
using vs = vector<str>;
using vc = vector<char>;
using vvi = vector<vi>;
using vvc = vector<vc>;
#define pb push_back
#define pob pop_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define si set<int>
#define sl set<ll>
#define sb set<bool>
#define sc set<char>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<str,int>
#define mis map<int,str>
#define mci map<char,int>
#define mdd map<double,double>
#define mll map<ll,ll>
#define pii pair<int,int>
#define pis pair<int,str>
#define psi pair<str,int>
#define pss pair<str,str>
#define pci pair<char,int>
#define pcc pair<char,char>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define rep( i , s , e ) for(int i = s ; i <= e ; ++i)
#define repR( i , e , s ) for(int i = e ; i >= s ; --i)
#define dtest(x,p) cout<<x<<"p"<<endl;
#define arprint(x) for(auto ele:x){cout<<ele<<" ";}cout<<endl;
//#define DEBUG

void inoutio(str s){
    freopen((s + ".in").c_str(), "r" , stdin);
    freopen((s + ".out")    .c_str(), "w" , stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    int n,m;
    ll ans=0;
    cin>>n>>m;
    mii leave;
    ll cost[n+1],weight[m+1];
    priority_queue<ll,vl,greater<ll>> order;
    rep(i,1,n){order.push(i);}
    rep(i,1,n){cin>>cost[i];}
    rep(i,1,m){cin>>weight[i];}
    queue<ll> waitlist;
    rep(i,1,2*m){
        ll a;
        cin>>a;
        if(a>0){
            if(order.empty()==false){
                if(waitlist.empty()==true){
                    ll prio=order.top();
                    order.pop();
                    ans+=weight[a]*cost[prio];
                    leave[a]=prio;
                }
                else{
                    ll current=waitlist.front();
                    waitlist.pop();
                    waitlist.push(a);
                    ll place=order.top();
                    order.pop();
                    ans+=weight[current]*cost[place];
                    leave[current]=place;
                }

            }
            else{
                waitlist.push(a);
            }
        }
        else{
            a*=-1;
            #ifdef DEBUG
            cout<<leave[a]<<"leave car"<<endl;
            #endif
            order.push(leave[a]);
            if(waitlist.empty()==false){
                ll current=waitlist.front();
                waitlist.pop();
                ll place=order.top();
                order.pop();
                #ifdef DEBUG
                cout<<current<<"car"<<endl;
                cout<<place<<"ppp"<<endl;
                cout<<weight[current]*cost[place]<<"$$$$$"<<endl;
                cout<<endl;
                #endif
                ans+=weight[current]*cost[place];
                leave[current]=place;
            }
        }
    }
    cout<<ans<<endl;
}