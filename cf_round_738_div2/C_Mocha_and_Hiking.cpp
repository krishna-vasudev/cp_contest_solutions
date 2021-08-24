#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int t,n,i,j,a[10009],v;
    cin>>t;
    for(j=0;j<t;j++){
        cin>>n;
        for(i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<long long int>ans;
        if(a[1]==1)
        {
            v=1;
            ans.push_back(n+1);
            for(i=1;i<=n;i++)
            ans.push_back(i);
        }
        else if(a[n]==0)
        {
            v=1;
            for(i=1;i<=n+1;i++){
                ans.push_back(i);
            }
        }
        else{
            v=0;
            for(i=1;i<=n-1;i++){
                ans.push_back(i);
                if(v==0){
                    if(a[i]==0&&a[i+1]==1){
                        v=1;
                        ans.push_back(n+1);
                    }
                }
            }
            ans.push_back(i);
        }
        if(v==1){
            for(auto itr:ans){
                cout<<itr<<" ";
            }
        }
        else{
            cout<<"-1";
        }
        cout<<"\n";
    }

}