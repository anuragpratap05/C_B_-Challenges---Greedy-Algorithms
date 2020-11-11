#include<bits/stdc++.h>
using namespace std;


bool compare(pair<int,int> p1, pair<int,int> p2)
{
    return p1.second<p2.second;
}

int main()
{
    int n;
    cin>>n;
    int x[n];
    int r[n];
    
    
    vector<pair<int , int>> v;
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>r[i];
    }
    
    for(int i=0;i<n;i++)
    {
        int s=x[i]-r[i];
        int e=x[i]+r[i];
        v.push_back(make_pair(s,e));
    }
    
    sort(v.begin(), v.end(), compare);
    
    int res=1;
    int fin=v[0].second;
    
    for(int i=1;i<n;i++)
    {
        if(v[i].first>=fin)
        {
            res++;
            fin=v[i].second;
        }
    }
    cout<<n-res<<endl;

    //for (auto i = v.begin(); i != v.end(); ++i) 
        //cout << *i << " ";
    
    
}
