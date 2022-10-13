//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int d, l;
//	cin >> d >> l;
//	vector<vector<int>>arr(d);
//	for (int i = 0; i < d; i++)
//	{
//		arr[i].resize(d);
//	}
//	for (int i = 0; i < d; i++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			if (i != j && arr[i][j] == 0)arr[i][j] = 99999;
//		}
//	}
//	for (int i = 0; i < l; i++)
//	{
//		int b, e, w;
//		cin >> b >> e >> w;
//		arr[b][e] = w; arr[e][b] = w;
//	}
//	for (int k = 0; k < d; k++)
//	{
//		for (int i = 0; i < d; i++)
//		{
//			for (int j = 0; j < d; j++)
//			{
//				if (arr[i][k] + arr[k][j] < arr[i][j])
//					arr[i][j] = arr[i][k] + arr[k][j];
//			}
//		}
//	}
//	for (int i = 0; i < d; i++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			cout << arr[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}