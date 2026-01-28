#include <iostream>
#include <cmath>
using namespace std;


void swap(int *a, int *b);



int main() {
	
	double x;
	double y, d, e;
	
	cout<<"dwse akeraio :"<<endl;
	cin>>y;
	cout<<"dwse 2o akeraio :"<<endl;
	cin>>x;
	
	cout<<"o 1os akeraios einai o "<<y<<" kai o 2os o "<<x<<endl;
	swap(y,x);
	cout<<"o 1os akeraios einai o "<<y<<" kai o 2os o "<<x<<endl;

    return 0;
}

void swap(int &a, int &b){
	int temp=a;
	a=b;
	b=temp;
}

