#include<bits/stdc++.h>
using namespace std;




int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int i,j,k,t,n,f,l;
    string s;
    cin>>t;
    for(j=0;j<t;j++){
        cin>>n;
        cin>>s;
        l=-1,f=-1;
        for(i=0;i<s.length();i++){
            if(s[i]!='?'){
                f=i;
                break;
            }
        }

        for(i=s.length()-1;i>=0;i--){
            if(s[i]!='?'){
                l=i;
                break;
            }
        }

        if(l==-1&&f==-1){
            for(i=0;i<s.length();i++){
                if(i%2==0){
                    cout<<"B";
                }
                else
                cout<<"R";
            }
        }
        else{
            for(i=f-1;i>=0;i--){
                if(s[i+1]=='B')
                s[i]='R';
                else
                s[i]='B';
            }

            for(i=l+1;i<s.length();i++){
                if(s[i-1]=='B')
                s[i]='R';
                else
                s[i]='B';
            }

            for(i=0;i<s.length();i++){
                if(s[i]=='?'){
                if(s[i-1]=='B')
                s[i]='R';
                else
                s[i]='B';
                }
            }
            cout<<s;
        }
        cout<<"\n";
    
    }
    

}