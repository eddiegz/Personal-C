#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using str = string;
using vi = vector<int>;
using vb = vector<bool>;
using vl = vector<ll>;
using vd = vector<ld>; 
using vs = vector<str>;
using vvi = vector<vi>;
using vc = vector<char>;
using vvc = vector<vc>;
#define pb push_back
#define pob pop_back
#define si set<int>
#define sl set<ll>
#define sb set<bool>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<string,int>
#define mci map<char,int>
#define mdd map<double,double>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()

void inoutio(string s){
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

void txtio(str inf,str ouf){
    freopen(inf.c_str(), "r" , stdin);
    freopen(ouf.c_str(), "w" , stdout);
}

const int MOD=1e9+7;
const int MAXN=1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    txtio("landin.txt","landout.txt");
    int r,c;
    cin>>r>>c;
    char arr[r][c];
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            char a;
            cin>>a;
            arr[i][j]=a;
        }
    }
    int answer=0;
    int output[4];
    for(int i=0;i<r;++i){
        int count=0,index=0;
        int current[4];
        while(index<=c-1){
            if(index==0 && arr[i][index]=='.'){
                current[0]=i+1;current[1]=1;
                index++;
                count++;
                }
            else if(arr[i][index]=='.'){
                if(index==c-1){
                    count++;
                    current[2]=i+1;current[3]=c;
                    if(count>answer){copy(begin(current),end(current),begin(output));}
                    answer=max(answer,count);
                    break;}
                else if(arr[i][index-1]=='#'){
                    current[0]=i+1;current[1]=index+1;
                    count=1;
                    index++;
                }
                else{
                    count++;
                    index++;
                }
            }
            else if(arr[i][index]=='#'){
                current[2]=i+1;current[3]=index;
                if(count>answer){copy(begin(current),end(current),begin(output));}
                answer=max(answer,count);
                count=0;
                index++;
            }
        }
    }
    for(int i=0;i<c;++i){
        int count=0,index=0;
        int current[4];
        while(index<=r-1){
            if(index==0 && arr[index][i]=='.'){
                current[0]=1;current[1]=i+1;
                index++;
                count++;
                }
            else if(arr[index][i]=='.'){
                if(index==r-1){
                    count++;
                    current[2]=c;current[3]=i+1;
                    if(count>answer){copy(begin(current),end(current),begin(output));}
                    answer=max(answer,count);
                    break;
                    }
                else if(arr[index-1][i]=='#'){
                    current[0]=index+1;current[1]=i+1;
                    count=1;
                    index++;
                }
                else{
                    count++;
                    index++;
                }
            }
            else if(arr[index][i]=='#'){
                current[2]=index;current[3]=i+1;
                if(count>answer){copy(begin(current),end(current),begin(output));}
                answer=max(answer,count);
                count=0;
                index++;
            }
        }
    }
    if(r==1 && c==1){output[0]=1;output[1]=1;output[2]=1;output[3]=1;}
    cout<<output[0]<<" "<<output[1]<<" "<<output[2]<<" "<<output[3]<<endl;
}