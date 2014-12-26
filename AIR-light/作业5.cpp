#include<iostream>
using namespace std;
void swap1(int *p,int *q);
void swap2(int &p,int &q);
int main()
{
	int a,b; 
	cin >> a >> b;
//	swap1(&a,&b);
	swap2(a,b);
	cout << a << b<< endl;
	system("pause");
	return 0;
}

void swap1(int *p,int *q)
{
	int z;
	z=*p;
	*p=*q;
	*q=z;
}

void swap2(int &p,int &q)
{
	int z;
	z=p;
	p=q;
	q=z;
}
