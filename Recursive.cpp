#include<iostream>
#include<cstdlib>
using namespace std;
int gcd_recursive(int a, int b)
{
	if(a<0||b<0)
	    throw "Invalid Number!!!";
	if(b==0)
	    return a;
	else
	    return gcd_recursive(b, a%b);
}
int gcd_iterative(int a, int b)
{
	if(a<0||b<0)
	    throw "Invalid Number!!!";
	for(int temp=0; b!=0; )
	{
		temp=a;
		a=b; 
		b=temp%b;
	}
	return a;
}
int fact_recursive(int num)
{
	if(num<0)
	    throw "Invalid Number!!!";
	if(num==0)
	    return 1;
	else 
	    return num*fact_recursive(num-1);
}
int fact_iterative(int num)
{
	if(num<0)
	    throw "Invalid Number!!!";
	int fact=1;
	for( ; num>0; num--)
	    fact*=num;
	return fact;
}
int power_recursive(int b, int e)
{
	if(b==0)
	    throw "Invalid Base!!!";
	if(e!=0)
	    return b*power_recursive(b, e-1);
	else 
	    return 1;
}
int power_iterative(int b, int e)
{
	if(b==0)
	    throw "Invalid Base!!!";
	int power=1;
	for( ; e!=0; e--)
	    power*=b;
	return power;
}
int fibo_iterative(int t)
{
	int a=0, b=1, c=0;
	if(t<0)
	    throw "Invalid Term!!!";
	if(t==0)
	    return 0;
	else if(t==1||t==2)
	    return t-1;
	else
    {
    	 for(int i=3; i<=t; i++)
        {
        	c=a+b;
        	a=b;
        	b=c;
		}
		return c;
	}   
}
int fibo_recursive(int t)
{
	if(t<0)
	    throw "Invalid Term!!!";
	else if(t==0)
	    return 0;
	else if(t==1||t==2)
	    return t-1;
	else
	    return fibo_recursive(t-1)+fibo_recursive(t-2);
}
int main()
{
	int num1, num2, num3, choice, base, exponent, term;
	char choice2;
	do
	{
			cout<<"****** Menu ******"<<endl;
        	cout<<"1. GCD"<<endl;
        	cout<<"2. Factorial"<<endl;
        	cout<<"3. Power"<<endl;
        	cout<<"4. Fibonacci Series"<<endl;
        	cout<<"Choose your option: ";
        	cin>>choice;
        	system("cls");
        	switch(choice)
        	{
        		case 1: try
                        {
                        cout<<"Enter two numbers to find their GCD: \n";
        		        cin>>num1>>num2;
        		        cout<<"GCD through recursive function: "<<gcd_recursive(num1, num2)<<endl;
        		        cout<<"GCD through iterative function: "<<gcd_iterative(num1, num2)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 2: try
        		        {
        		        cout<<"Enter the number to find its factorial: \n";
        		        cin>>num3;
        		        cout<<"Factorial through recursive function: "<<fact_recursive(num3)<<endl;
        		        cout<<"Factorial through iterative function: "<<fact_iterative(num3)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 3: try
        		        {
        		        cout<<"Enter the base and exponent to find the value: \n";
        		        cin>>base>>exponent;
        		        cout<<"Value through recursive function: "<<power_recursive(base, exponent)<<endl;
        		        cout<<"Value through iterative function: "<<power_iterative(base, exponent)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		case 4: try
        		        {
        		        cout<<"Enter the term to find the Fibonacci Number: \n";
        		        cin>>term;
        		        cout<<"Series through recursive function: "<<fibo_recursive(term)<<endl;
        		        cout<<"Series through iterative function: "<<fibo_iterative(term)<<endl;
						}
						catch(const char* str)
						{
							cout<<str<<endl;
						}
        		        break;
        		default: cout<<"Wrong choice of option!!!";
        	}
        	cout<<"Do you want to continue more (Y/N): ";
        	cin>>choice2;
        	system("cls");
	}while(choice2=='Y'||choice2=='y');
	return 0;
}
