//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0;
//	cin >> n;
//	vector<int>arr(n);
//	for (auto i = arr.begin(); i != arr.end(); i++)
//	{
//		cin >> *i;
//	}
//	for (int d = 5; d > 0; d-=2)//dΪ����,��5,3,1Ϊ����������ϣ������
//	{
//		for (int p = d; p < n; p++)//����Ϊ3������0��3��6��9��������������־�Ϊ1,4,7,10
//		{
//			int tmp = arr[p];//������ʱ����
//			int i;
//			for (i = p; i >= d && arr[i - d] > tmp; i-=d)//�������򣬵�һ������1һ�����ڶ�����������������
//			{
//				arr[i] = arr[i - d];//���С�������
//			}
//			arr[i] = tmp;//���iΪ��Ϊtmp
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}