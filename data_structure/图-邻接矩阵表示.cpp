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
//	//��һ������ĸD������ĸU����ʾ����ͼ������ͼ��
//    //�ڶ����Ƕ������Ŀ��Լ�������0��ʼ������
//    //�������Ǳߵ���Ŀ��
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
//		cin >> Data[i].begin >> Data[i].end >> Data[i].value;//��㣬�յ㣬�ߵ�Ȩ�����ȣ���
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