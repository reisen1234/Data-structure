//#include<iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0, i = 0;
//	cin >> n;
//	vector<int>arr(n);
//	for (int i = 0; i < arr.size(); i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < arr.size(); i++)
//	{
//		for (int j = 0; j < arr.size() - 1; j++)
//		{
//			if (arr[j] >= arr[j + 1])
//			{
//				int temp = 0;
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				i = 1;
//			}
//		}
//		if (i == 1)
//		{
//			for (int i = 0; i < arr.size(); i++)
//			{
//				cout << arr[i] << ' ';
//			}
//			cout << endl;
//		}
//		else
//		{
//			for (int i = 0; i < arr.size(); i++)
//			{
//				cout << arr[i] << ' ';
//			}
//			break;
//		}
//	}
//	return 0;
//}
