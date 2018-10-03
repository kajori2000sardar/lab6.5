//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//declare variables
	long double i,j,n,sum=0;

	//ask for a number as input
	cout<<"Enter the ending number : ";

	//take the number as input
	cin>>n;

	//create loop
	for(i=1;i<=n;i++)
	{
		//condition to be taken
		sum+=i;

			for(j=1;j<=n;j++)
			{
				//check the condition
				if(sum==j*j)
				cout<<"The required number will be "<<sum<<endl;
			}
	}
	//terminating the program
	return 0;
}
		
