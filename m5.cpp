#include <iostream>
#include <iostream>
using namespace std;
int main() {
	int n, s=0;
	cin >> n;
	int A[n];
	for(int i=0; i<n; ++i)
		cin >> A[i];
	for(int i=0; i<n-1; ++i) {
		if(A[i]<0 && A[i+1]<0 || A[i]>0 && A[i+1]>0 || A[i]==0 && A[i+1] ==0) 
			s++;
	}
	if(s==0)
		cout << "NO";
	else 
		cout << "YES";

return 0;
}