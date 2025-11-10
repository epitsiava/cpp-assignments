#include <iostream>

using namespace std;


int main()
{
	int n=5;
	int i;
	int j;
	int s;

	for (i=1; i<=2*n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if (i<=n)
				s=i;
			else 
				s=2*n-i+1;
		
            
        	if(j <= s)
                cout << "*";
          
        }
        cout << endl;
    }

	return 0;
}
