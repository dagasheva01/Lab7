#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, s=0;
	cin >> n;
	int A[n];

	for(int i=0; i<n; ++i)
		cin >> A[i];
	for(int i=0; i<n-1; ++i) {
		if(A[i+1]> A[i])
		s++;
		}
 
cout << s << " ";


return 0;
}