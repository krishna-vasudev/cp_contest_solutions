#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int s,t,i,j,k,ans=0;
    cin>>s>>t;
    for(i=0;i<=s;i++){
        for(j=0;j<=s;j++){
            for(k=0;k<=s;k++){
                if((i+j+k)<=s&&(i*j*k)<=t)
                ans++;
            }
        }
    }

    cout<<ans<<"\n";

}