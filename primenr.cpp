#include <iostream>

using namespace std;

int main()
{
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
		int m, n,k=0;
		
		cin>>m>>n;
		
		for( m ; m<=n; m++)
		{
			k=0;
			for(int j=1;j<=m/2;j++)
			{
				if(m%j==0)
					k++;
				if(k>1)
				break;
			}
			if(k==1)
			cout<<m<<endl;	
		}
		cout<<endl;
	}
	
	return 0;
}
