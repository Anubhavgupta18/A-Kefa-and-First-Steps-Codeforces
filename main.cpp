#include <bits/stdc++.h>
using namespace std;
int main() {
	    int n,i,c=1,k=1;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    if(n==1)
	    {
	        cout<<"1"<<endl;
	    }
	    else
	    {
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]<=a[i+1])
            {
                c++;
            }
            else
            {
                if(c>k)
                {
                    k=c;
                }
                c=1;
            }
	    }
	    k=max(c,k);
        cout<<k<<endl;
	    }
	return 0;
}
