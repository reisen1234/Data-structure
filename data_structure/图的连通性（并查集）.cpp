//#include <iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//int Find(int i, int* father)
//{
//	if (father[i] == -1)
//	{
//		return i;
//	}
//	return father[i] = Find(father[i], father);
//}
//void Union(int x, int y, int* father)
//{
//	x = Find(x,father);
//	y = Find(y,father);
//	if (x != y)
//	{
//		father[x] = y;
//	}
//}
//int main()
//{
//	int d = 0, l = 0, count = 0;
//	cin >> d >> l;
//	int* father = new int[d];
//	for (int i = 0; i < d; i++)
//	{
//		father[i] = -1;
//	}
//	for (int i = 0; i < l; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		Union(x, y, father);
//	}
//	for (int i = 0; i < d; i++)
//	{
//		if (Find(i, father) == i)
//		{
//			count++;
//		}
//	}
//	cout << count << endl;
//	return 0;
//}