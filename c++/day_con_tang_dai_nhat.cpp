#include <bits/stdc++.h>
using namespace std;


int _lis(int arr[], int n, int* max_ref){
	// Base case
	if (n == 1)
		return 1;

	// 'max_ending_here' is length of
	// LIS ending with arr[n-1]
	int res, max_ending_here = 1;

	// Recursively get all LIS ending with
	// arr[0], arr[1] ... arr[n-2]. If
	// arr[i-1] is smaller than arr[n-1],
	// and max ending with arr[n-1] needs
	// to be updated, then update it
	for (int i = 1; i < n; i++){
		res = _lis(arr, i, max_ref);
		if (arr[i - 1] < arr[n - 1] && res + 1 > max_ending_here)
			max_ending_here = res + 1;
	}

	// Compare max_ending_here with the
	// overall max. And update the
	// overall max if needed
	if (*max_ref < max_ending_here)
		*max_ref = max_ending_here;

	// Return length of LIS ending
	// with arr[n-1]
	return max_ending_here;
}

// The wrapper function for _lis()
int lis(int arr[], int n){
	// The max variable holds the result
	int max = 1;

	// The function _lis() stores its
	// result in max
	_lis(arr, n, &max);

	// Returns max
	return max;
}

// Driver program to test above function
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n];
		for(int& x : arr) cin >> x;
		cout << lis(arr, n) << endl;;
	}
	return 0;
}

