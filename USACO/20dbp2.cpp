#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pb pushback

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,answer=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr[i]=p;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            float totalPetals = 0;
            for (int k = i; k <= j; k++) {
                totalPetals += arr[k];
            }
            float numberFlowers = j - i + 1;
            float average = totalPetals / numberFlowers;
            for (int k = i; k <= j; k++) {
                if (arr[k] == average) {
                    answer++;
                    break;
                }
            }
        }
    }
    cout<<answer<<endl;
}