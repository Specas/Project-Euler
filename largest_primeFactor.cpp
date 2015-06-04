#include <iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		long n;
		cin >> n;
		
		long lp = 0;
		long c;
		bool isPrime;
		
		for(long j=2;j*j<=n;j++)
		{
			if(n%j==0)
			{
				 c = n/j;
				
				// Check for prime now
				isPrime = true;
				for(long k=2;k<c;k++)
				{
					if(c%k==0)
					{
						isPrime = false;
					}
				}
			}
				
				if(isPrime && (c>lp))
				{
					lp = c;
				}
			}
		
			
			cout << lp << endl;
		}
		return 0;
	}
				
				
				
				
				
				
				
