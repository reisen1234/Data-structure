//#include <iostream>
//#include <vector>
//using namespace std;
//int t = 0;
//int partition(vector<int>& arr, int low, int high)
//{
//	int value = arr[low];
//	int L = low, R = high;
//	while(low < high)
//	{
//		while (low < high && arr[high] >= value)
//		{
//			high--;
//		}
//		while (low < high && arr[low] <= value)
//		{
//			low++;
//		}
//		if (low < high)
//		{
//			int n = arr[low];
//			arr[low] = arr[high];
//			arr[high] = n;
//		}
//		else
//		{
//			arr[L] = arr[high];
//			arr[high] = value;
//		}
//	}
//	if (R - L >= 2)
//	{
//		for (int i = L; i <= R; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	return low;
//}
//void quick_sort(vector<int>&arr, int L, int R)
//{
//	if (L >= R)return;
//	if (L < R)
//	{
//		int pa = partition(arr, L, R);
//		quick_sort(arr, L, pa - 1);
//		quick_sort(arr, pa + 1, R);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>arr(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	quick_sort(arr, 0, n - 1);
//	return 0;
//}