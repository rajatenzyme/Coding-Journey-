#include<iostream>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int b[n] = {0};
	    b[0] = a[n-1];
	    for(int i=1;i<n;i++)
	    {
	       
	        b[i] = a[(i-1)%n];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<b[i]<<" ";
	    }
	    cout<<endl;
	}
	
	return 0;
}