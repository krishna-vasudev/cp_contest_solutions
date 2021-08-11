#include<bits/stdc++.h>
using namespace std;

long long int mod=(long long int)1e9+7;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2)%mod;
    if (b % 2)
        return ((res%mod )* (res%mod)*(a%mod));
    else
        return ((res%mod) * (res%mod));
}

long long int evenbinsum(long long int n){
    if(n%2==0)
    return (binpow(2,n-1)%mod-1%mod)%mod;
    else
    return (binpow(2,n-1)%mod);
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,i,j,k,ans,val,dp[200009][2],n;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n>>k;
        val=evenbinsum(n);
        if(k==0)
        cout<<1<<"\n";
        else{
            for(i=0;i<k;i++){
                if(i==0){
                    dp[i][1]=(n%2==0?1:0);
                    dp[i][0]=(n%2==0?0:1)+val;

                    dp[i][1]=dp[i][1]%mod;
                    dp[i][0]=dp[i][0]%mod;
                }
                else{
                    dp[i][1]=(n%2==0?1:0)*binpow(2,n*i);
                    dp[i][0]=((((n%2==0?0:1)+val)%mod)*((dp[i-1][1]%mod+dp[i-1][0]%mod)%mod));

                    dp[i][1]=dp[i][1]%mod;
                    dp[i][0]=dp[i][0]%mod;
                }
            }
            ans=(dp[k-1][0]%mod+dp[k-1][1]%mod)%mod;
            cout<<ans<<"\n";
        }
    }

}