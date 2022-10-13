//#include <iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//void DFS(vector<vector<int>>& arr, vector<int>& visit, int start)
//{
//	visit[start] = 1;
//	cout << start << " ";
//	for (int i = 0; i < visit.size(); ++i)
//	{
//		if (visit[i] == 0 && arr[start][i] == 1)
//		{
//			DFS(arr, visit, i);
//		}
//	}
//}
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
//	DFS(arr, visit, b);
//	return 0;
//}