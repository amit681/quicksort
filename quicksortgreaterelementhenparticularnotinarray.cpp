#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q,i;
    cin>>n>>q;
    vector<long long int>v(n);
    set<long long int>s;
    	unordered_map<long long int,long long int> ans;
    for(i=0;i<n;i++)
    {
    cin>>v[i];
    s.insert(v[i]);
    }
   
     
    while(q--)
    {
        long long int k,z;
        cin>>k;
      	if(!ans.count(k))
		{
        z=k+1;
		while(s.count(z))
		{
    		z++;
		}
		for(i=k;i<z;i++)
		ans[i]=z;
    	}
		cout<<ans[k]<<endl;
    }
}



https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/yet-to-keep-6f89250c/