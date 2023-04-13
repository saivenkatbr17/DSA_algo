#include "iostream"
using namespace std;

int linear_search(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main()
{
	int arr[] = {5,6,7,2,9,1};
	int n = sizeof(arr);
	int x = 4;

	int pos = linear_search(arr, n, x);
	if (pos == -1) cout <<"NOT FOUND"<<endl;
	else cout <<"Element found at position "<<pos;
	return 0;
}
