#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long double t,n,a[100009],j,maxi,avg;
    long long int i;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        maxi=LONG_LONG_MIN;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            maxi=max(maxi,a[i]);
        }
        avg=0;
        for(i=0;i<n;i++)
        {
            avg+=a[i];
        }
        cout.precision(20);
        cout<<((avg-maxi)/(n-1))+maxi<<"\n";
    }

}