#include <iostream>
#include <cmath>
using namespace std;
int main () {
	int n;
	cin >> n;
	int A[n];
	for(int i=0; i<=n-1; ++i) 
		cin >> A[i];
	int b;
	for(int i=1; i<n; ++i)
		b[i]= A[i-1];
	b[0]= A[n-1];
	int j=0;

	for(j, j<n; ++j)
		cout << b[j] << " ";


return 0;
}