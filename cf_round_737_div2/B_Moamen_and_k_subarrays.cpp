#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int i,j,k,n,t,a[100009],c;
    cin>>t;
    for(j=0;j<t;j++){
        cin>>n>>k;
        vector<long long int>p;
        for(i=0;i<n;i++){
            cin>>a[i];
            p.push_back(a[i]);
        }
        c=0;
        sort(p.begin(),p.end());
        for(i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                c++;
            }
            else{
                auto itr1=lower_bound(p.begin(),p.end(),a[i]);
                auto itr2=lower_bound(p.begin(),p.end(),a[i+1]);
                if((itr2-p.begin())-(itr1-p.begin())>1)
                c++;
            }
        }

        if(c<k)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }

}