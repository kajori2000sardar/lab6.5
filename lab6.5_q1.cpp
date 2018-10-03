//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//apples 1 rupees
	//mangoes 3 rupees
	//banana 0.50 rupees
	//bought 100 fruits for 100 rupees

	//declaring variables
	float a,m,b,s=0;
	
	//showing an output
	cout<<"The required number of each fruits is as under fulfilling the given conditions : "<<endl;
	//creating a for loop for initializing the no. of apples
	for(a=100;a>=0;a--)
	{
		//creating a for loop for initializing the no. of banana
		for(b=0;a+b<=100;b++)
		{
			//creating a loop for initializing the no. of mangoes
			for(m=0;a+b+m<=100;m++)
			{
				//checking whether the total no. of fruits is equal to hundred or not
				if(a+b+m==100)
				{ 
					//summing up the cost of the fruits
					s=(a*1)+(b*0.50)+(m*3);

					//checking the total cost of fruits bought
					if(s==100)
					{
						//print no. of apples, bananas, mangoes bought
						cout<<"Number of apples is "<<a<<" , number of mangoes is "<<m<<" and number of bananas is "<<b<<endl;
					}
				}
			}
		}
	}
	//terminating the program
	return 0;
}
