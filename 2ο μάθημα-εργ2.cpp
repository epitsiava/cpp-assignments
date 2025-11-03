#include <iostream>

using namespace std;


int main()
{
	int kwh;
	float synolo;
	
	
	
	cout << "kilovatores: ";
	cin >> kwh;

 	if (kwh < 0 || kwh > 4000) {
        cout << "mh egkyrh timh. epitrepto evros: 0 - 4000 kWh." << endl;
        exit(0);;
    }
    
    else {

		if (kwh>0 && kwh<=500){
 		synolo=5+kwh*0.5;
 		}

		else if (kwh>500 && kwh<=900){
		synolo=5+500*0.5;
 		synolo+=(kwh-500)*(0.5*1.08);	
		}
		else if (900<kwh && kwh<=1100){
		synolo=5+500*0.5;
 		synolo+=(400)*(0.5*1.08);	
		synolo+=(kwh-900)*(0.5*1.08*1.12);
		}
		else {
		synolo=5+500*0.5;
 		synolo+=(400)*(0.5*1.08);	
		synolo+=(200)*(0.5*1.08*1.12);	
		synolo+=(kwh-1100)*(0.5*1.08*1.12*1.2);
		
		}
	}
		
		cout << "synoliko poso xrewshs: " << synolo << " evrw" << endl;

    	return 0;
}










		

  
