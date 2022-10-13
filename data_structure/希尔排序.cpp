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
//	for (int d = 5; d > 0; d-=2)//d为增量,以5,3,1为增量，进行希尔排序
//	{
//		for (int p = d; p < n; p++)//例如为3，则在0，3，6，9里面进行排序，下轮就为1,4,7,10
//		{
//			int tmp = arr[p];//储存临时变量
//			int i;
//			for (i = p; i >= d && arr[i - d] > tmp; i-=d)//插入排序，第一轮排序1一个，第二轮两个，慢慢增加
//			{
//				arr[i] = arr[i - d];//如果小则向后移
//			}
//			arr[i] = tmp;//最后将i为变为tmp
//		}
//		for (int i = 0; i < n; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}