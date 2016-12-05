#include <iostream>
#include <cmath>
using namespace std;
int main () {

	int n, b;
	
	cin >> n;
	b=n-1;
	int A[n];

	for(int i=0; i<n; ++i)
		cin >> A[i];
	
	for(int i=0; i<(n/2); ++i){
		swap (A[i], A[b]);
		b--;
	}

	for(int i = 0; i < n; i ++)
		cout << A[i] << " ";



return 0;
}