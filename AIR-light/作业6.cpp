#include<iostream>
#include<cmath>
using namespace std;
using namespace math;
int main()
{
	int n,i;
	cin >> n;
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0)
	{
		cout << "No" << endl;
		break;
	}
	if(i>sqrt(n))
	cout << "Yes" << endl;
	system("pause");
	return 0;
}
