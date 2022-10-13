//#include <iostream>
//#include <vector>
//using namespace std;
//void Cout_All(vector<int>arr)
//{
//	for (int i = 0; i < arr.size(); i++)cout << arr[i] << " ";
//	cout << endl;
//}
//void merge(vector<int>& arr, vector<int>&tmp, int L, int R, int Rightend)
//{
//	int leftend = R - 1;
//	int t = L;
//	int num = Rightend - L + 1;
//	while (L <= leftend && R <= Rightend)
//	{
//		if (arr[L] <= arr[R])tmp[t++] = arr[L++];
//		else tmp[t++] = arr[R++];
//	}
//	while (L <= leftend)tmp[t++] = arr[L++];
//	while (R <= Rightend)tmp[t++] = arr[R++];
//	for (int i = 0; i < num; i++, Rightend--)
//	{
//		arr[Rightend] = tmp[Rightend];
//	}
//}
//void merge_sort(vector<int>&arr, vector<int>&tmp, int n, int length)
//{
//	int i;
//	for ( i = 0; i <= n - 2 * length; i += 2 * length)
//	{
//		merge(arr, tmp, i, i + length, i + 2 * length - 1);
//	}
//	if (i + length < n)merge(arr, tmp, i, i + length, n - 1);
//	else for (int j = i; j < n; j++)tmp[j] = arr[i];
//}
//int main()
//{
//	int d = 0;
//	cin >> d;
//	vector<int>arr(d);
//	vector<int>tmp(d);
//	for (int i = 0; i < d; i++)cin >> arr[i];
//	int length = 1;
//	while (length < d)
//	{
//		merge_sort(arr, tmp, d, length);
//		Cout_All(arr);
//		length *= 2;
//	}
//	return 0;
//}