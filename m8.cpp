#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int A[n];

	for(int i=0; i<n; i++)
		cin >> A[i];
	for(int i=1; i<n;i+=2) {
		swap(A[i],A[i-1]);	
	    
	}

	for(int i=0; i<n; i++)
		cout << A[i] << " ";

return 0;
}