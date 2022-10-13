//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//int main()
//{
//	int n, s;
//	char c;
//	cin >> c >> n >> s;
//	vector<vector<int>>arr(n);
//	vector<int>visit(n);
//	for (int i = 0; i < n; i++)
//	{
//		arr[i].resize(n);
//	}
//	for (int i = 0; i < s; i++)//¹¹ÔìÍ¼
//	{
//		int begin, end;
//		cin >> begin >> end;
//		if (c == 'U')arr[end][begin] = 1;
//		arr[begin][end] = 1;
//	}
//	int b;
//	cin >> b;
//	queue<int>q;
//	visit[b] = 1;
//	q.push(b);
//	cout << b << " ";
//	while (!q.empty())
//	{
//		int id = q.front();
//		q.pop();
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[id][i] == 1 && visit[i] == 0)
//			{
//				visit[i] = 1;
//				q.push(i);
//				cout << i << " ";
//			}
//		}
//	}
//	return 0;
//}