//BT1:

#include <iostream>
using namespace std;

struct phone
{
	int area;
	int exchange;
	int number; 
};

int main()
{
	
	phone number1 = {212,767,8900};
	phone number2;
	cout << "\nEnter your area code, exchange, and number: ";
	cin>>number2.area>>number2.exchange>>number2.number;
	cout<<number1.area<<" "<<number1.exchange<<" "<<number1.number<<endl;
	cout<<number2.area<<" " <<number2.exchange<<" "<<number2.number;
}

//--------------------------------------------------------------------------
//BT2

#include <iostream>
using namespace std;

void input(float &a, float &b, float &c);
void output(float &a, float &b, float &c);
float tinhtien(float &a,float &b,float &c);

int main()
{
	float a;
	float b;
	float c;
	input(a,b,c);
	output(a,b,c);
} 

void input(float &a, float &b, float &c)
{
	cout<<"Enter initial amount: ";
	cin>>a;
	cout<<"Enter number of years: ";
	cin>>b;
	cout<<" Enter interest rate (percent per year):";
	cin>>c;
	
}
void output(float &a, float &b, float &c)
{
	cout<<"initial amount: "<<a<<endl;
	cout<<"number of years: "<<b<<endl;
	cout<<"interest rate (percent per year): "<<c<<endl;
	cout<<"At the end of "<<b<<" years, you will have "<<tinhtien(a,b,c)<<endl;
}
float tinhtien(float &a,float &b,float &c)
{
	float tam=0;
	for(int i=1;i<=b;i++)
	{
		tam=a+(a*c/100);
		a=tam;
	}
	return tam;
}

//-----------------------------------------------------------------------------
//BT3

#include <iostream>
using namespace std;

void input(int &a, char &b, int &c);
void tinh(int a, char b, int c);
bool hoi(char n,int a, char b, int c);

int main()
{
	int a;
	char b;
	int c;
	int n;
	input(a,b,c);
	tinh(a,b,c);
	hoi(n,a,b,c);
	
}

void input(int &a, char &b, int &c)
{
	cout<<"Enter the expression: ";
	cin>>a>>b>>c;
}


void tinh(int a, char b, int c)
{
	float tam=0;

	switch (b)
	{
		case '+':
			{
				tam=a+c;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}
		case '-':
			{
				tam=a-c;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}
		case '/':
			{
				tam=a*1.0/c;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}
		case '*':
			{
				tam=a*c;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}	
	}
}
bool hoi(char n,int a, char b, int c)
{
	cout<<"Do you want to perform another operator(y or n)? ";
	cin>>n;
	if(n=='y')
	{
		input(a,b,c);
		tinh(a,b,c);
	}
	if(n=='n')
	{
		return 0;	
	}	
	
}

//----------------------------------------------------------------------
//BT4

#include <iostream>
using namespace std;

void input(int &a,int &b,int &c, int &d, char &e);
void tinh(int a,int b,int c, int d, char e);
bool hoi(char n,int a,int b,int c, int d, char e);

int main()
{
	int a;
	int b;
	int c;
	int d;
	char n;
	char e;
	input(a,b,c,d,e);
	tinh(a,b,c,d,e);
	hoi(n,a,b,c,d,e);
}
void input(int &a,int &b,int &c, int &d, char &e)
{
	char tam;
	cout<<"Enter the expression: ";
	cin>>a>>tam>>b>>e>>c>>tam>>d;
}
void tinh(int a,int b,int c, int d, char e)
{
	float tam=0;
	switch (e)
	{
		case '+':
			{
				tam=(a*d + b*c)*1.0 / (b*d)*1.0;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}
		case '-':
			{
				tam=(a*d - b*c)*1.0 / (b*d)*1.0;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}
		case '*':
			{
				tam=(a*c)*1.0 / (b*d)*1.0;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}
		case '/':
			{
				tam=(a*d)*1.0 / (b*c)*1.0;
				cout<<"ket qua: "<<tam<<endl;
				break;
			}		
	}
}
bool hoi(char n,int a,int b,int c, int d, char e)
{
	cout<<"Do you want to perform another operator(y or n)? ";
	cin>>n;
	if(n=='y')
	{
		input(a,b,c,d,e);
		tinh(a,b,c,d,e);
	}
	if(n=='n')
		return 0;
}

