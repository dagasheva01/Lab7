#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n, s=0;
	cin >> n;

	int A[n];
	for(int i=0; i<n; i++)
		cin >> A[i];

	for(int i=0; i<n; i++) {
		if(A[i]>0)
			s++;	
	}

			cout << s;
	





return 0;
}