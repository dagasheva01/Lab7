#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;

	cin >> n;

	int A[n];

	for(int i=0; i<n; ++i)
		cin >> A[i];
	int maxi=A[0];
	for(int i=0; i<n-1; ++i) {
	        if(maxi<A[i])
			maxi= A[i];
		if(maxi<A[i+1])
			maxi= A[i+1];
			

		}

	cout << maxi;
	


return 0;
}