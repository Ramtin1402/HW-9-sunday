#include<iostream>
using namespace std;

int main(){
	int A[10] = {100,12,24,45,67,1,8,42,126,204};
	int min0 = A[0];
	int min1 = A[0];
	for(int i=0; i<10; i++){
		if (A[i] < min0)
		min0 = A[i];
		if (A[i] < min1 && A[i] > min0)
		min1 = A[i];
	}
	cout << min0 << " " << min1 ;
}
