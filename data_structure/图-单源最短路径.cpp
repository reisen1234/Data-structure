//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//struct node
//{
//	int dist;
//	int path;
//};
//int finmin(vector<node>path, vector<bool>color)
//{
//	int min = 999999, d = -1;
//	for (int i = 0; i < path.size(); i++)
//	{
//		if (path[i].dist < min && color[i] == false)
//		{
//			min = path[i].dist;
//			d = i;
//		}
//	}
//	return d;
//}
//int main()
//{
//	int d, l;
//	cin >> d >> l;
//	vector<vector<int>>arr(d);
//	vector<node>path(d);
//	vector<bool>color(d);
//	for (int i = 0; i < d; i++)arr[i].resize(d);
//	for (int i = 0; i < d; i++)
//	{
//		path[i].dist = 9999999;//将每条道路的dist更新为最大值，每次更新才能计入
//		path[i].path = -1;//道路暂无通路
//	}
//	for (int i = 0; i < d; i++)color[i] = false;//未抵达该点
//	for (int i = 0; i < l; i++)//输入数据
//	{
//		int b, e, w;
//		cin >> b >> e >> w;
//		arr[b][e] = w;
//	}
//	int begin, end;
//	cin >> begin >> end;
//	path[begin].dist = 0;
//	while (1)
//	{
//		int V = finmin(path,color);//寻找最小值的点
//		if (V == -1)break;//如果找不到该点就退出，即通路全部抵达了一遍
//		color[V] = true;//抵达了该点
//		for (int i = 0; i < d; i++)//
//		{
//			if (arr[V][i] != 0)//检测该点的邻接点
//			{
//				if (color[i] == false)//如果未抵达
//				{
//					if (path[V].dist + arr[V][i] < path[i].dist)//则更新道路dist以及通路，若这条路更短采用这条
//					{
//						path[i].dist = path[V].dist + arr[V][i];
//						path[i].path = V;
//					}
//				}
//			}
//		}
//	}
//	cout << path[end].dist;
//	return 0;
//}