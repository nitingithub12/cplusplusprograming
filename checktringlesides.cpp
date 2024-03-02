#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter a integer:";
	cin>>a;
	cout<<"enter b integer:";
	cin>>b;
	cout<<"enter c integer:";
	cin>>c;
	if((a+b)>c && (b+c)>a && (c+a)>b){
		cout<<"this three number are sides of tringle";
	}
	else
	cout<<"not sides of tringle";
}