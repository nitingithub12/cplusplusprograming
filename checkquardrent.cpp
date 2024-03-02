#include<iostream>
using namespace std;
int main(){
	int x,y;
	cout<<"enter x courdrant:";
	cin>>x;
	cout<<"enter y courdrant:";
	cin>>y;
	if(x>1 && y>1)
	{
		cout<<"at first quardrent";
		return 1;
	}
	if(x<0 && y>1)
	{
		cout<<"at second quardrent";
	}
	if(x<0 && y<0)
	{
		cout<<"at third quardrent";
	}
	if(x>1 && y<0)
	{
		cout<<"at fourth quardrent";
		return 1;
	}
	
	
	else
	cout<<"at origin ";
	}