#include <iostream>

using namespace std;


int main()

{
float array[5];
int i;
int x;
int j;


for(i=0; i<5; i++){
cout<< "dwse timh pinaka ["<< i << "]"<<endl;
cin>> array[i];	

}
for (x=0; x<4; x++){

	for(i=0; i<4-x; i++){
		if (array[i]>array[i+1])
		{
		j=array[i];
		array[i]=array[i+1];
		array[i+1]=j;
		}
	}
}
for(i=0; i<5; i++){
	cout << "h timh ["<< i << "] toy pinaka einai: " << array[i] <<endl;
		
}				

return 0;
}
