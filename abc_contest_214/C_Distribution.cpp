#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,i;
    cin>>n;
    vector<long long int> s(n),t(n);

    for(i=0;i<n;i++)
    cin>>s[i];
    for(i=0;i<n;i++)
    cin>>t[i];

    vector<long long int>ans=t;
    
    for(i=0;i<2*n;i++){
         ans[(i+1)%n]=min(ans[(i+1)%n],ans[i%n]+s[i%n]);
    }

    for(auto itr:ans){
        cout<<itr<<"\n";
    }
    

}