//c++ code to find all armstrong numbers between [1,n](n being given by user) 

#include <iostream>
using namespace std;
int checkarmstrong(int num)//function to check whether the number is armstrong or not
{
	int temp_num,rem,sum;
	temp_num = num;
	sum = 0;
	while(temp_num != 0)
	{
		rem = temp_num % 10;
		sum = sum +(rem*rem*rem);
		temp_num =temp_num/10;
		
	}
	if (sum==num)
	{
		return 1;
	}
	else
	return 0;
	
}
int main()
{
	int i ,n;
	cout<<"enter the value of N: ";
	cin>>n;
	cout<<"all armstrong numbers from 1 to "<<n<<endl;
	for(i=1;i<=n;i++)
	{
		if(checkarmstrong(i))//function call
		cout<<i<<endl;
	}
	return 0;
}
