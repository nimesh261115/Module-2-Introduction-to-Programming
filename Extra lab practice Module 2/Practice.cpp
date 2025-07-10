#include<iostream>
using namespace std;

class P{
public:
	fun()
	{
		int n , i;
		int prime= 0;
		cout<<"Enter a Number : "<<endl;
		cin>>n;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				prime++;
			}
		}
			if(prime==2)
			{
				cout<<"Prime number :"<<n<<endl;
			}
			else
			{
				cout<<"Not prime number : "<<n<<endl;
			}
		
    }
};
main()
{
	P obj;
	obj.fun();
}

