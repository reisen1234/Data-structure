//#include <iostream>
//#include <vector>
//using namespace std;
//void prime(vector<vector<int>>& arr,int d)
//{
//	int index = 0, cur = 0;
//	int sum = 0;
//	vector<int>visit(d);
//	vector<int>dist(d);
//	vector<vector<int>>copy1(d);
//	vector<int>mini;
//	for (int i = 0; i < d; i++)copy1[i].resize(d);
//	visit[index] = 1;
//	for (int i = 0; i < d; i++)
//	{
//		dist[i] = arr[index][i];
//	}
//	for (int i = 1; i < d; i++)
//	{
//		int min = 999999;
//		for (int j = 0; j < d; j++)
//		{
//			if (visit[j] == 0 && dist[j] < min)
//			{
//				min = dist[j];
//				index = j;
//			}
//		}
//		mini.push_back(min);
//		visit[index] = 1;
//		cout << index << " ";	
//		for (int j = 0; j < d; j++)
//		{
//			if (visit[j] == 0 && dist[j] > arr[index][j])
//			{
//				dist[j] = arr[index][j];
//			}
//		}
//	}
//	cout << endl;
//	for (auto i = mini.begin(); i != mini.end(); i++)
//	{
//		for (int k = 0; k < d; k++)
//		{
//			for (int j = k; j < d; j++)
//			{
//				if (arr[k][j] == *i)
//				{
//					copy1[k][j] = *i;
//					copy1[j][k] = *i;
//				}
//			}
//		}
//	}
//	for (int k = 0; k < d; k++)
//	{
//		for (int j = 0; j < d; j++)
//		{
//			cout << copy1[k][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main()
//{
//	int d = 0, l = 0;
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
//			arr[i][j] = 999999;
//		}
//	}
//	for (int i = 0; i < l; i++)
//	{
//		int b, e, w;
//		cin >> b >> e >> w;
//		arr[b][e] = w;
//		arr[e][b] = w;
//	}
//    prime(arr, d);
//	return 0;
//}