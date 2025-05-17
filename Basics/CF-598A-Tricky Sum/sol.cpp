#include <bits/stdc++.h>

using namespace std;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void sol(){
    long long n, sum=0;
    /*long long next_power_2 = 1;
    cin>>n;
    for(long long i = 1; i<=n; i++){
        if(i==next_power_2){
            sum-=i;
            next_power_2*=2;
        }else{
            sum+=i;
        }
    }*/
    cin>>n;
    sum = ((n)*(n+1))/2;
    long long pow_2=1;
    while(pow_2<=n){
        sum -= (2*pow_2);
        pow_2*=2;
    }

    cout<<sum<<endl;
    return;

}

int main()
{
    fast();
    int t; cin>>t;
    while(t--){
       sol();
    }
    return 0;
}
