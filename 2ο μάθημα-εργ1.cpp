#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	float a;
	float b;
	float c;
	
	cout << "dwse a: ";
	cin >> a;
	cout << "dwse b: ";
	cin >> b;
	cout << "dwse c: ";
	cin >> c;
	
	if (a!=0)
	{
		double d=((double)b*b-4*(double)a*c);
		if (d>0)
		{
		double x1=(-(double)b+(sqrt(d)))/(2*(double)a);
		double x2=(-(double)b-(sqrt(d)))/(2*(double)a);
		
		cout << "oi lyshs einai " << x1 <<" kai " << x2 << endl;
		
		}
		else if (d==0)
		{
		double x1=(-(double)b/(2*(double)a));

		cout << "exei mia diplh lysh th " << x1 << endl;
	
		}
		else
		{cout << "den yparxoyn lyseis "<<endl;
		}
		
		float x_aks = -b / (2 * a);
		float y_aks = c - (b * b) / (4 * a);
		
		cout << "aksonas symmetrias: x = " << x_aks << endl;
    	cout << "koryfh : (" << x_aks << ", " << y_aks << ")" << endl;

	}
	
	else
	{
	cout << "prepei to a diaforo toy 0. " << endl;
	}	
	
	return 0;
			
	
	}
	
