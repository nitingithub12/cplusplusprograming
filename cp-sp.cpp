#include<iostream>
using namespace std;
int main(){
	int cp,loss,profit;
	cout<<"enter cost price:";
	cin>>cp;
	int sp;
		cout<<"enter selling price:";
	cin>>sp;
	if(cp>sp){
		cout<<"loss=";
		loss=cp-sp;
		cout<<loss;
		return 1;
		cout<<endl;
	}
	
	if(sp>cp){
		cout<<"profit=";
		profit=sp-cp;
		cout<<profit;
		return 1;
		cout<<endl;
	}
	
	else
	cout<<"no profit nor loss";
}