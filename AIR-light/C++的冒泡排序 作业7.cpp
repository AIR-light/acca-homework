#include<iostream>
using namespace std;
int main ()
{
	int a[100], n,m,i,j;
	cin >> n;
	for(i=0;i<n;i++)
	cin >> a[i];
	for(i=0;i<n;i++)
	for(j=0;j<n-1;j++)
	if(a[j]>a[j+1])
	{
		m=a[j];
		a[j]=a[j+1];
		a[j+1]=m;
	}
	for(i=0;i<n;i++)
	cout << a[i] << " ";
	cout << endl;
	system("pause");
	return 0; 
}
