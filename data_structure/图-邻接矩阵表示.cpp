//#include <iostream>
//#include <vector>
//using namespace std;
//struct data {
//	int begin;
//	int end;
//	int value;
//};
//int main()
//{
//	//第一行是字母D或者字母U，表示有向图和无向图。
//    //第二行是顶点的数目，约定顶点从0开始计数。
//    //第三行是边的数目。
//	int n = 0, b = 0;
//	char c = 0;
//	cin >> c >> n >> b;
//	struct data* Data = new struct data[b + 1];
//	vector<vector<int>>a(n);
//	for (int i = 0; i < n ; i++)
//	{
//		a[i].resize(n);
//	}
//	for (int i = 0; i < b; i++)
//	{
//		cin >> Data[i].begin >> Data[i].end >> Data[i].value;//起点，终点，边的权（长度）。
//	}
//	if (c == 'D' ? 1 : 0)
//	{
//		for (auto i = 0; i < b; i++)
//		{
//			a[Data[i].begin][Data[i].end] = Data[i].value;
//		}
//	}
//	else
//	{
//		for (auto i = 0; i < b; i++)
//		{
//			a[Data[i].begin][Data[i].end] = Data[i].value;
//			a[Data[i].end][Data[i].begin] = Data[i].value;
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}