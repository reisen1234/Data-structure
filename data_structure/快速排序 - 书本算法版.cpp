//#include <iostream>
//#include <vector>
//using namespace std;
//int quick_sort(vector<int>& a, int low, int high)
//{
//	int  L = low, H = high;
//	a[0] = a[low];
//	int value = a[low];
//	while (low < high)
//	{
//		while (low < high && a[high] >= value)--high;
//		a[low] = a[high];
//		while (low < high && a[low] <= value)++low;
//		a[high] = a[low];
//	}
//	a[low] = a[0];
//	if (H - L >= 2)
//	{
//		for (int i = L; i <= H; i++)
//		{
//			cout << a[i] << " ";
//		}
//		cout << endl;
//	}
//	return low;
//}
//void Qsort(vector<int>& a, int low, int high)
//{
//	if (low < high)
//	{
//		int k = quick_sort(a, low, high);
//		Qsort(a, low, k - 1);
//		Qsort(a, k + 1, high);
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int>a(n + 1);
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	Qsort(a, 1, n);
//	return 0;
//}