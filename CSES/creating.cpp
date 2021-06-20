#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vs vector<string>
#define pb push_back
#define pob pop_back
#define si set<int>
#define ff first
#define ss second
#define sf scanf
#define pf printf
#define mii map<int,int>
#define msi map<string,int>
#define mci map<char,int>
#define pii pair<int,int>
#define psi pair<string,int>
#define pss pair<string,string>
#define pci pair<char,int>
#define endl "\n"
#define all(x) x.begin(),x.end()



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    string line;
    cin>>line;
    sort(all(line));
    vs newline;
    do{
        newline.pb(line);
    } while(next_permutation(all(line)));
    int answer=newline.size();
    cout<<answer<<endl;
    for(string element : newline){
        cout<<element<<endl;
    }
}