#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n1, n2, n3, n4;
    cout<<"introduzca el valor el primer valor: "; cin>>n1;
    cout<<"introduzca el valor el segundo valor : "; cin>>n2;
    cout<<"introduzca el valor el tercer valor: "; cin>>n3;
    cout<<"introduzca el valor el cuarto valor: "; cin>>n4;
    if (n1<n2 && n1<n3 && n1<n4)
    {
    	if(n2<n3<n4)
    	{
    		cout<< n1<<endl;
    		cout<<n2<<endl;
    		cout<< n3<<endl;
    		cout<<n4<<endl;
		}
		else{
			cout<< n1<<endl;
			cout<< n3<<endl;
			cout<< n2<<endl;
			cout<<n4<<endl;
		}
	}
	if(n2>n1 && n2>n3 && n2>n4)
	{
		if(n1<n3>n4)
		{
		
		 cout<< n2<<endl;
		 cout<<n4<<endl;
		 cout<< n1<<endl;
	 	 cout<< n3<<endl;
   	}
		else{
			cout<< n2<<endl;
			cout<< n3<<endl;
			cout<< n1<<endl;
			cout<<n4<<endl;
		}
	}
	if(n3<n1 && n3<n2 && n3<n4)
    {
    	if(n1>n2>n4)
    	{
    		cout<<n3<<endl;
    		cout<< n1<<endl;
    		cout<< n2<<endl;
    		cout<<n4<<endl;
		}
		else{
			cout<< n2<<endl;
			cout<<n3<<endl;
			cout<< n1<<endl;
			cout<<n4<<endl;
		}
	}
	if(n4<n1 && n4<n2 && n3<n4)
    {
    	if(n1>n2>n4)
    	{
    		cout<<n3<<endl;
    		cout<< n1<<endl;
    		cout<< n2<<endl;
    		cout<<n4<<endl;
		}
		else{
			cout<< n2<<endl;
			cout<<n3<<endl;
			cout<< n1<<endl;
			cout<<n4<<endl;
		}
	}
   return 0;
}
