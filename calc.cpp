#include<iostream>
int main()
{
	int a,b,c,ch;
	cout<<"enter 2 nos.";
	cin>>a>>b;
	cout<<"\n1.add\n2.sub\n3.mul\n4.div";
	cin>>ch;
    switch(ch)
	{
		case 1 : c=a+b;
				cout<<"Addition is : "<<c;
				break;
				
		case 2 : c=a-b;
				cout<<"Sub is : "<<c;
				break;
				
	
	}
	return 0;
}