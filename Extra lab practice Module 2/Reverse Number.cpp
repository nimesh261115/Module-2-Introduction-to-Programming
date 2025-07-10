#include<iostream>
using namespace std;
class A{
public:
	fun()
	{
		int n,rev=0;
		cout<<"Enter a Number : ";
		cin>>n;
		cout<<"Orignal Number : "<<n<<endl;
		
		while(n!=0)
		{
			int digit = n%10;
			rev = rev * 10 + digit;
			n = n/10;
		}
		cout<<"Reversed Number is : "<<rev<<endl;
	}
};
main()
{
	A obj;
	obj.fun();
}

