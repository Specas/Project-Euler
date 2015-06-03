#include <iostream>
#include <math.h>


using namespace std;

int main()
{
	long tt;
	cin >> tt;
	for(int i=0;i<tt;i++)
	{
	
		long n;
		cin >> n;
		
		long a = 1;
		long b = 2;
		long sum = 0;
		
		//~ Finding the greatest fibonacci number <= n
		
		while(b<=n)
		{
			sum = a+b;
			a = b;
			b = sum;
		}
		
		//~ 'a' gives us the required fibonacci number
		
		
		//~ Now we need to find the sum of all even numbers till that number

		//~ finding sum of all even numbers
		
		long aa=1;
		long bb=2;
		sum = 0;
		long tsum = 2;
		while(true)
		{
			sum = aa+bb;
			aa=bb;
			bb=sum;
			
			
			if(sum%2==0)
			{
				tsum = tsum + sum;
			}
			if(sum==a)
			{
				break;
			}
		}
		
		cout << tsum << endl;
		
		
		
		
}
return 0;
}
		
