#include<iostream>
using namespace std;

double taylorSeries(int x,int n){
	static double p = 1;
	static double f = 1;
	double r;
	if(n == 0)
		return 1;
	r = taylorSeries(x,n-1);
	p*= x;
	f*=n;
	return r + p/f;
}

double e(int x, int n)
{
 static double p=1,f=1;
 double r;
 if(n==0)
 return 1;
 r=e(x,n-1);
 p=p*x;
 f=f*n;
 return r+p/f;
}

int main(){
	int x,n;
	cin >> x >> n;
	cout << taylorSeries(x,n) << "\n";
	cout << e(x,n);
}
