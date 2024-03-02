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
	if(a<b && a<c){
		cout<<"a is smaller";
	}
	else if(b<a && b<c){
		cout<<"b is smaller";
	}
	else if(c<a && c<b){
		cout<<"c is smaller";}
	else
	cout<<"all are equal";
}