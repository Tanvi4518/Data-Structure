
#include <bits/stdc++.h>
using namespace std;

void kLargest(int arr[], int n, int k)
{
	sort(arr, arr + n, greater<int>());

	// Print the first kth largest elements
	for (int i = 0; i < k; i++)
		cout << arr[i] << " ";
}

void kSmallest(int arr[], int n, int k)
{
	sort(arr, arr + n, smaller<int>());

	// Print the first kth largest elements
	for (int i = k; i > 0; i--)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 1, 23, 12, 9, 30, 2, 50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int k = 3;
	kLargest(arr, n, k);
  kSmallest(arr, n, k);
  
}


