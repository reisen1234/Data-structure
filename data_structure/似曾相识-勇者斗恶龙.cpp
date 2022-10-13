//#include<queue>
//#include <iostream>
//#include<cstring>
//using namespace std;
//struct node {
//	int c;
//	int cnt;
//};
//int bfs(bool* visit, int* ci, int* di, int n, int m)
//{
//	queue<node>q;
//	node st;
//	st.c = n;
//	st.cnt = 0;
//	node next, now;
//	visit[st.c] = true;
//	q.push(st);
//	while (!q.empty())
//	{
//		now = q.front();
//		q.pop();
//		for (int i = 0; i < m; i++)
//		{
//			if (ci[i] == di[i] && ci[i] != now.c)
//				continue;
//			if (now.c >= ci[i] && !visit[now.c - ci[i]])
//			{
//				next.c = now.c - ci[i];
//				next.cnt = now.cnt + 1;
//				if (next.c != 0)
//				{
//					next.c += di[i];
//					visit[next.c] = true;
//					if (next.c > n)
//					{
//						next.c = n;
//					}
//					q.push(next);
//				}
//				else
//				{
//					return next.cnt;
//				}
//			}
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int n, m, l;
//	cin >> n >> m >> l;
//	int* ci = new int[m];
//	int* di = new int[m];
//	bool visit[1111];
//	memset(visit, false, sizeof(visit));
//	for (int i = 0; i < m; i++)
//	{
//		cin >> ci[i] >> di[i];
//	}
//	int ans = bfs(visit, ci, di, n, m);
//	cout << ans;
//	return 0;
//}