//#include <iostream>
//#include <vector>
//#include <queue>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int l, d;
//	cin >> d >> l;
//	vector<vector<int>>arr(d);
//	vector<int>line(d);
//	queue<int>q;
//	for (int i = 0; i < d; i++)
//	{
//		arr[i].resize(d);
//	}
//	for (int i = 0; i < l; i++)
//	{
//		int b, e;
//		cin >> b >> e;
//		line[e]++;
//		arr[b][e] = 1;
//	}
//
//	for (int i = 0; i < d; i++)
//	{
//		if (line[i] == 0)
//		{
//			q.push(i);
//			line[i] = -1;
//			break;
//		}
//	}
//	while (!q.empty())
//	{
//		int front = q.front();
//		q.pop();
//		cout << front << " ";
//		for (int i = 0; i < d; i++)
//		{
//			if (arr[front][i] == 1 && line[i] != 0 && line[i] != -1)
//			{
//				line[i]--;
//			}
//		}
//		if (q.empty())
//		{
//			for (int i = 0; i < d; i++)
//			{
//				if (line[i] == 0)
//				{
//					q.push(i);
//					line[i] = -1;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}