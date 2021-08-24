#include<bits/stdc++.h>
using namespace std;
vector<long long int> g1[1009];
vector<long long int> g2[1009];

long long int parent1[1009],size1[1009],parent2[1009],size2[1009];

void make_set1(long long int v) {
    parent1[v] = v;
    size1[v] = 1;
}

long long int find_set1(long long int v) {
    if (v == parent1[v])
        return v;
    return parent1[v] = find_set1(parent1[v]);
}


void union_sets1(long long int a, long long int b) {
    a = find_set1(a);
    b = find_set1(b);
    if (a != b) {

        if (size1[a] < size1[b])
            swap(a, b);
        parent1[b] = a;
        size1[a]+=size1[b];
        
    }
}

void make_set2(long long int v) {
    parent2[v] = v;
    size2[v] = 1;
}

long long int find_set2(long long int v) {
    if (v == parent2[v])
        return v;
    return parent2[v] = find_set2(parent2[v]);
}


void union_sets2(long long int a, long long int b) {
    a = find_set2(a);
    b = find_set2(b);
    if (a != b) {

        if (size2[a] < size2[b])
            swap(a, b);
        parent2[b] = a;
        size2[a]+=size2[b];
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long int n,m1,m2,i,j,u,v;
    cin>>n>>m1>>m2;
    for(i=1;i<=n;i++){
        make_set1(i);
        make_set2(i);
    }
    for(i=1;i<=m1;i++){
        cin>>u>>v;
        g1[u].push_back(v);
        g1[v].push_back(u);
        union_sets1(u,v);
    }

    for(i=1;i<=m2;i++){
        cin>>u>>v;
        g2[u].push_back(v);
        g2[v].push_back(u);
        union_sets2(u,v);
    }
    vector<pair<long long int,long long int> >ans;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i!=j){
              if((find_set1(i)!=find_set1(j))&&(find_set2(i)!=find_set2(j))){
                  ans.push_back(make_pair(i,j));
                  union_sets1(i,j);
                  union_sets2(i,j);
              }
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto itr :ans)
    {
        cout<<itr.first<<" "<<itr.second<<"\n";
    }
}