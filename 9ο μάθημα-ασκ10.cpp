#include <iostream>

using namespace std;

class circle{
	protected:
	double aktina;
	public:
			double give_perimetros(){
			double p;
			p=2*3.14*aktina;
			return p;
		}
		
		circle(double a=1) {
		aktina=a;}
	
		~circle(){
			cout<<"o kyklos katastrafhke";
}
};

class kylindros: public circle{
	private:
		double ypsos;
		double pyknothta;
	public:
			double give_maza(){
			double p=ypsos*pyknothta*aktina*aktina*3.14;
			return p;
		}
		
		kylindros(double a=1, double b=1, double c=1) {
		aktina=a;
		ypsos=b;
		pyknothta=c;}
	
		~kylindros(){
			cout<<"o kylindros katastrafhke";
}
};



int main(){
	kylindros kyl1(20, 5, 2);
	
	double x=kyl1.give_perimetros();
	double y=kyl1.give_maza();
	
	cout<<"h perimetros vashs einai "<<x<< " kai h maza einai "<<y<<endl;
	return 0;
}
