//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n, sp = 0;
//	cin >> n;
//	vector<vector<int>>arr(n);
//	vector<int>data(n);
//	for (int j = 0; j < n; j++)
//	{
//		arr[j].resize(n);
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (arr[i][j] == 1)
//			{
//				data[i]++;
//			}
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		if (data[i] % 2 == 1)
//		{
//			sp++;
//		}
//	}
//	if (sp == 2 || sp == 0)
//	{
//		cout << "1" << endl;
//	}
//	else
//	{
//		cout << (sp + 1) / 2;
//	}
//	return 0;
//}