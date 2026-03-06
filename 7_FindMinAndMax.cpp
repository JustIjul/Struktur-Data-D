#include <bits/stdc++.h>

using namespace std;

int getMin(int arr[], int n){
	
	int temp = arr[0];
	
	for(int i = 1; i < n; i++)
		temp = min(temp, arr[i]);
	return temp;
}

int getMax(int arr[], int n){
	
	int temp = arr[0];
	
	for(int i = 1; i < n; i++)
		temp = max(temp, arr[i]);
	return temp;
}

int main(){

	int arr[] = {1, 0, 99, -15, 10};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Minimum : " << getMin(arr, n);
	cout << endl;
	cout << "Maksimum : " << getMax(arr, n);
	
	return 0;
}

