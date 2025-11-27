#include <iostream>

using namespace std;


int main()

{
float array[10];
int i;
int mhkos=1;
int max_mhkos=1;
int x=0;
int arxh=0;


	for(i=0; i<10; i++)
	{
	cout<< "dwse timh pinaka ["<< i << "]"<<endl;
	cin>> array[i];	
	}


	for(i=0; i<9; i++)
	{
		if (array[i]<=array[i+1])
			{mhkos++;
			}
		else
			{
			if(mhkos>max_mhkos)
				{max_mhkos=mhkos;
				arxh=x;
				}
				
			mhkos=1;
			x=i+1;
			}	
	}

	if(mhkos>max_mhkos)
		{max_mhkos=mhkos;
		arxh=x;
		}



	cout << "o megalyteros synexomenos aykswn pinakas exei mhkos  "<< max_mhkos << " kai times: " << endl;
	
	for (i=arxh; i<arxh+max_mhkos; i++)
	{cout << array[i] << endl;
	}
	
	
return 0;
}

