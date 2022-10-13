//#include <iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//int all = 0;
//void DFS(vector<vector<int>>& arr, vector<int>& visit, int start)
//{
//	stack<int>s;
//	s.push(start);
//	visit[start] = 1;
//	while (!s.empty())
//	{
//		int st = s.top();
//		int i;
//		for (i = 0; i < all; ++i)
//		{
//			if (visit[i] == 0 && arr[st][i] == 1)
//			{
//				s.push(i);
//				visit[i] = 1;
//				break;
//			}
//		}
//		if (i == all)s.pop();
//	}
//}
//int main()
//{
//	int d = 0, l = 0, count = 0;
//	int p = 0;
//	int front = 0;
//	cin >> d >> l;
//	all = d;
//	vector<vector<int>>arr(d);
//	vector<int>visit(d);
//	for (int i = 0; i < d; i++)arr[i].resize(d);
//	while (l--)
//	{
//		int b, e;
//		cin >> b >> e;
//		arr[b][e] = 1;
//		arr[e][b] = 1;
//	}
//	while (1)
//	{
//		p = 0;
//		for (int i = 0; i < d; i++)
//		{
//			if (visit[i] == 0)
//			{
//				p = 1;
//				front = i;
//				break;
//			}
//		}
//		if (p == 0)break;
//		DFS(arr, visit, front); 
//		count++;
//	}
//	cout << count << endl;
//	return 0;
//}