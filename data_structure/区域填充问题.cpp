//#include <iostream>
//#include <queue>
//#include <stack>
//#include <vector>
//using namespace std;
//int main()
//{
//	int l = 0, c = 0;
//	cin >> c >> l;
//	vector<vector<int>>arr(l);
//	for (int i = 0; i < l; i++)
//	{
//		arr[i].resize(c);
//	}
//	for (int i = 0; i < l; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	int x = 0, y = 0;
//	cin >> x >> y;
//	stack<int>sx;
//	stack<int>sy;
//	sx.push(x);
//	sy.push(y);
//	while (!sx.empty() && !sy.empty())
//	{
//		int x1 = sx.top(); sx.pop();
//		int y1 = sy.top(); sy.pop();
//		arr[y1][x1] = 1;
//		if (x1 == c - 1 || x1 == 0 || y1 == l - 1 || y1 == 0)//检测是否为边界,如果是
//		{
//			int xa = x1 - 1 >= 0 ? x1 - 1 : 0;
//			int xd = x1 + 1 <= c - 1 ? x1 + 1 : c - 1;
//			int yw = y1 - 1 >= 0 ? y1 - 1 : 0;
//			int ys = y1 + 1 <= l - 1 ? y1 + 1 : l - 1;
//			if (arr[yw][x1] == 0)//上
//			{
//				sx.push(x1);
//				sy.push(yw);
//			}
//			if (arr[ys][x1] == 0)//下
//			{
//				sx.push(x1);
//				sy.push(ys);
//			}
//			if (arr[y1][xa] == 0)//左
//			{
//				sx.push(xa);
//				sy.push(y1);
//			}
//			if (arr[y1][xd] == 0)//右
//			{
//				sx.push(xd);
//				sy.push(y1);
//			}
//		}
//		else//若不为边界
//		{
//			int xa = x1 - 1;
//			int xd = x1 + 1;
//			int yw = y1 - 1;
//			int ys = y1 + 1;
//			if (arr[yw][x1] == 0)//上
//			{
//				sx.push(x1);
//				sy.push(yw);
//			}
//			if (arr[ys][x1] == 0)//下
//			{
//				sx.push(x1);
//				sy.push(ys);
//			}
//			if (arr[y1][xa] == 0)//左
//			{
//				sx.push(xa);
//				sy.push(y1);
//			}
//			if (arr[y1][xd] == 0)//右
//			{
//				sx.push(xd);
//				sy.push(y1);
//			}
//		}
//	}
//	for (int i = 0; i < l; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cout << arr[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}