#include<iostream>
#define ARRAY_SIZE 10

using namespace std;

int main(){
	
	int A[ARRAY_SIZE] = {2,4,6,7,10,12,13,16,19}, tmp;
	cin >> A[9];
	for(int i = 1; i< ARRAY_SIZE; ++i)
	{
		for(int j = 0
		;	j < (ARRAY_SIZE-i); ++i)
	
	if (A[j]>A[j+1])
	{
		tmp = A[j];
		A[j] = A[j+1];
		A[j+1]= tmp;
	}
	for (int i=0;i<10;i++){
		cout << A[i] << " ";
	}
}
}