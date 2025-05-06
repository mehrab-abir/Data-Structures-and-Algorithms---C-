#include<iostream>
#include<vector>

using namespace std;

long long int fact(long long int n){
    if(n==0 || n == 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){

    int n;
    cin>>n;

    long long int ans = fact(n);

    cout<<ans;

    return 0;
}