#include <iostream>

using namespace std;

int main()
{
	//~ Input number of test cases
	
	int t;
	cin >> t;
	
	for(int i=0;i<t;i++)
	{
		long n;
		cin >> n;
		--n; // As less than n
		long sum = 0;
		
		long m3 = n-(n%3);
		long m5 = n-(n%5);
		long m15 = n-(n%15);
		
		// sum of 3's
		m3 = m3/3;
		sum = sum+(3*(((m3*(m3+1))/2)));
		// sum of 5's
		m5 = m5/5;
		sum = sum+(5*(((m5*(m5+1))/2)));
		// subtract 15's
		m15 = m15/15;
		sum = sum-(15*(((m15*(m15+1))/2)));
		
		
		
		
		
		cout << sum << endl;
	}
	return 0;
}
