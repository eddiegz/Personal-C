#include <iostream>
using namespace std;
int c;
int main(){
    int N;
    cin>>N;
    while (N--){
      long long  S, F;
      cin>>S>>F;
      if (S==F){
          cout<<S<<"\n";
          continue;
      }
      int re = S;
      if (re%2==0){
          for (int i = 1; i <=3; i++){
          re = re^(S+i);
          c = (F+1) - (S+3);
          }
      }
      else{
          for (int i = 1; i <=2; i++){
          re = re^(S+i);
          c = (F+1) - (S+2);
          }
      }
      int p = c%4;
      if (p == 0) p = 4;
      int start = F - p +1;
      for (int i = 0 ; i < p-1; i++){
          start+=1;
          re = re^start;
      }
      cout<<re<<"\n";
    }
    return 0;
}