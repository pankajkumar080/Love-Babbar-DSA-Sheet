// C++ program of above implementation
#include <iostream>
using namespace std;

// Pair struct is used to return
struct Pair
{
	int max;
	int min;
}
maxmin; // We can add variables by separating them with a comma here

Pair getMaxMin(int arr[], int n)
{
	// If there is only one element,then return it as max and min both
	if (n == 1)
	{
		maxmin.max = arr[0];    // Put data into the structure
		maxmin.min = arr[0];    // Put data into the structure
		return maxmin;
	}

	// If there are more than one elements,then initialize max and min
	if (arr[0] > arr[1])
	{
		maxmin.max = arr[0];
		maxmin.min = arr[1];
	}
	else
	{
		maxmin.max = arr[1];
		maxmin.min = arr[0];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > maxmin.max)
			maxmin.max = arr[i];

		else if (arr[i] < maxmin.min)
			maxmin.min = arr[i];
	}
	return maxmin;
}

/* Driver function to test above functions */
int main()
{
	int arr[] = { 85,9,6,74,36,5,87,444,14,2264,84 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	getMaxMin(arr, arr_size);

	cout << "Maximum element is " << maxmin.max << endl;
	cout << "Minimum element is " << maxmin.min;

	return 0;
}
