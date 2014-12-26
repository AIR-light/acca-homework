#include<iostream>
using namespace std;
int main ()
{
	int i,n,a;
	cin >> n;
	int m[100];
	for(i=0;i<n;i++)
	{
		cin >> a;
		m[i]=a;
	}
	for(i=n-1;i>=0;i--)
	cout << m[i] << " " ;
	cout << endl;
	system("pause");
	return 0;
} 
