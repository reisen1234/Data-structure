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
//		path[i].dist = 9999999;//��ÿ����·��dist����Ϊ���ֵ��ÿ�θ��²��ܼ���
//		path[i].path = -1;//��·����ͨ·
//	}
//	for (int i = 0; i < d; i++)color[i] = false;//δ�ִ�õ�
//	for (int i = 0; i < l; i++)//��������
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
//		int V = finmin(path,color);//Ѱ����Сֵ�ĵ�
//		if (V == -1)break;//����Ҳ����õ���˳�����ͨ·ȫ���ִ���һ��
//		color[V] = true;//�ִ��˸õ�
//		for (int i = 0; i < d; i++)//
//		{
//			if (arr[V][i] != 0)//���õ���ڽӵ�
//			{
//				if (color[i] == false)//���δ�ִ�
//				{
//					if (path[V].dist + arr[V][i] < path[i].dist)//����µ�·dist�Լ�ͨ·��������·���̲�������
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