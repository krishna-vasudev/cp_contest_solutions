#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,ans;
    cin>>n;

    if(n<=125)
    ans=4;
    else if(n<=211)
    ans=6;
    else
    ans=8;

    cout<<ans<<endl;
    

}