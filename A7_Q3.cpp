#include <iostream>
using namespace std;

class Rectangle{
	private:
		double length;
		double breadth;
	public:
		void setLength(double len){
			length=len;
		}
		void setBreadth(double bre){
			breadth=bre;	
		}
	private:
		double area;
		double perimeter;
	public:
		double calc_ar(){
			return length*breadth;
		}
		double calc_per(){
			return 2*(length+breadth);
		}
};

int main() {
	Rectangle R1;
	Rectangle R2;
	double len,bre;
	cout<<"Enter the length and breadth of the first reactangle:"<<endl;
	cin>>len>>bre;
	R1.setLength(len);
	R1.setBreadth(bre);
	cout<<"Enter the length and breadth of the first reactangle:"<<endl;
	cin>>len>>bre;
	R2.setLength(len);
	R2.setBreadth(bre);
	if((R1.calc_ar())>(R2.calc_ar()))
		cout<<"Area of reactangle 1 is greater than that of rectangle 2"<<"\n";
	else if((R1.calc_ar())==(R2.calc_ar()))
		cout<<"Perimeter of reactangle 1 is equal to that of rectangle 2"<<"\n";
	else 
		cout<<"Area of reactangle 2 is greater than that of rectangle 1"<<"\n";
	if((R1.calc_per())>(R2.calc_per()))
		cout<<"Perimeter of reactangle 1 is greater than that of rectangle 2"<<"\n";
	else if((R1.calc_per())==(R2.calc_per()))
		cout<<"Perimeter of reactangle 1 is equal to that of rectangle 2"<<"\n";
	else 
		cout<<"Perimeter of reactangle 2 is greater than that of rectangle 1"<<"\n";
	return 0;
}
