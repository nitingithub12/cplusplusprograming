#include<iostream>
using namespace std;
int main(){
	int l,b;
	float area ,parameter;
	cout<<"enter length:";
	cin>>l;
		cout<<"enter brigth:";
	cin>>b;
	area=l*b;
	cout<<"area=";
	cout<<area;
	cout<<endl;
parameter=2*(l+b);
	cout<<"parameter=";
	cout<<parameter;
	cout<<endl;
	if(area>parameter){
		cout<<"area of ractangle is grater than its parameter";
	  return 1;
	}
	if(area<parameter){
		cout<<"parameter of ractangle is grater than its area";
	return 1;
}}