#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int x=0;
    while(n>0){
        x = (x*10) + (n%10);
        n/=10;
    }
    return x;
}

int main(){
    int n;
    cout<<"Enter a 3 digit number to reverse: ";
    cin>>n;

    int ans = solve(n);
    cout<<ans;
}
