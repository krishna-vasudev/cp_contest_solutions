#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t,i,j,n,a[200],ans;
    cin>>t;
    for(j=0;j<t;j++){
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                ans=a[i];
            }
            else{
                ans=ans&a[i];
            }
        }
        cout<<ans<<endl;
    }
    

}