#include <iostream>
using namespace std;

int main(){
    double we,he,index;
    scanf("%lf%lf",&we,&he);
    index=we/(he*he);
    if (index>25) cout<<"Overweight";
    else if(index<=25 and index>=18.5) cout<<"Normal weight";
    else if (index<18.5) cout<<"Underweight";
}