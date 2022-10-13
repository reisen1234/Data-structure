//#include<iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0, i = 0;
//	cin >> n;
//	int s = n - 1;
//	vector<int>arr(n);
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int max = 0;
//		int t = 0;
//		for (int j = 0; j <= s; j++)
//		{
//			if (arr[j] >= max)
//			{
//				max = arr[j];
//				t = j;
//			}
//		}
//		int temp = 0;
//		temp = arr[t];
//		arr[t] = arr[s];
//		arr[s] = temp;
//		s--;
//		if (s != 0)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				cout << arr[i] << ' ';
//			}
//			cout << endl;
//		}
//	}
//	return 0;
//}