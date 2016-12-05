#include <iostream>
#include <cmath>
using namespace std;

double retake(double a, int n) {
	
	double s=1, b;
	
	if(n%2==0) {
		n /= 2;
		a *=a;

		for(int i = 1; i<= n;i++)
			s *=a;

		return s;   

	}
	else {
	     b = a*a;

	     for(int i = 1; i <=(n-1)/2;i++)
	     	s *= b;

		return s*a;
	     

	}
	
	
	
	
}

int main() {

	int k, l, w;
	double d;

	cin >> d >> k;

	cout << retake(d, k);	


 return 0;
 }