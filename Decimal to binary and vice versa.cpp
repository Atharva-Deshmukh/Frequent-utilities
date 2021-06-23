/*
Self made.

Issue: modify it to handle floating numbers too where decomal and fractional parts needed to be handled differently and 
       then combined
*/

#include<iostream>
#include<cmath>

using namespace std;

int Bin2Dec(int n)                                                                   //not working
{
	//Traverse bitwise from right to left (or right shift the number continously)
	//also keep track of the iteration using iterator i
	int i=0,decimal=0,count=0,m;
	m=n;
	
	while(m!=0)
	{
		count++;
		m>>=1;
	}
	
	cout<<"\nDecimal => "<<decimal;	
	cout<<"\ni => "<<i;
	cout<<"\n";
	while((n!=0) && (i<count))
	{
		if((n & 1)!=0)
		{
			cout<<"\ni => "<<i;
			decimal=decimal+pow(2,i);
			cout<<"\nDecimal => "<<decimal;
			i++;
			
		}
		else
		{
			cout<<"\ni => "<<i;
			decimal=decimal+0;
			cout<<"\nDecimal => "<<decimal;
			i++;
		
		}
		cout<<"\n";
		n>>=1;
	}
	return decimal;
}

void Dec2Bin(int n)                                                          //working
{
	//Used Bitwise operators bcoz they are faster than arithmetic operators
	//it can also be done by using arrays but it consumes extra space
	
	//ASSUMMING size of integer is 32 bit
	for(int i=31;i>=0;i--)
	{
		//traversing n bitwise
		int k=n>>i;
		if(k&1)
		{
			cout<<"1";
		}
		else
		{
			cout<<"0";
		}
		
	}

}

int main()
{
	int choice;
	
	cout<<"\nEnter '1' for binary to decimal \n Enter '2' for decimal to binary";
	
	cout<<"\n\nEnter choice plz =>";
	cin>>choice;
	
	//brackets isiliye taaki sab codes separate rahe and saare variables alag alag ho
	switch(choice)
	{
		case 1:
			{
				int n;
				cout<<"\n\nEnter Binary number =>";
				cin>>n;
				cout<<"\nDecimal number is => "<<Bin2Dec(n);
				break;
			}
			case 2:
			{
				int n;
				cout<<"\n\nEnter Decimal number =>";
				cin>>n;
				cout<<"\nBinary number is => "<<" ";
				Dec2Bin(n);
				break;
			}
	}
	
return 0;	
}
