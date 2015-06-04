#include <iostream>
#include <math.h>

using namespace std;

int largestPrimeFactor(long n)
{
	long lp = 0; // stores largest prime factor
	
	//~ while(n%2==0)
	//~ {
		//~ n=n/2;
		//~ lp = 2;
	//~ }
	//~ 
	//~ // n is odd at this point
	//~ 
	//~ for(long i=3;i<=sqrt(n);i=i+2)
	//~ {
		//~ while(n%i==0)
		//~ {
			//~ n=n/i;
			//~ lp = i;
		//~ }
	//~ }
	//~ 
	//~ // If the number is prime then n would be > 2
	//~ 
	//~ if(n>2)
	//~ {
		//~ if(n>lp)
		//~ {
			//~ lp=n;
		//~ }
	//~ }
	//~ return lp;
	
	
	
	long c = 2;
	while(c*c<=n)
	{
		if(n%c==0)
		{
			n=n/c;
			lp = c;
		}
		else
		{
			++c;
		}
	}
	if(n>lp)
	{
		lp = n;
	}
	
	return lp;
	
}
		
	
	
	


int main()
{
	
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		long nn;
		cin >> nn;
		cout << largestPrimeFactor(nn) << endl;
	}
	
	return 0;
}











