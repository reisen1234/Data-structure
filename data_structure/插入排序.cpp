//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	int n = 0, k = 0, m = 0;
//	cin >> n;
//	vector<int>a1(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a1[i];
//	}
//	for (int i = 1; i < a1.size(); i++)
//	{
//		if (a1[i - 1] > a1[i])
//		{
//			for (int j = i; j >= 1; j--)
//			{
//				if (a1[j] < a1[j - 1])
//				{
//					int temp = a1[j];
//					a1[j] = a1[j - 1];
//					a1[j - 1] = temp;
//					k = 1;
//				}
//				else
//				{
//					break;
//				}
//			}
//		}
//		else
//		{
//			continue;
//		}
//		if (k == 1)
//		{
//			for (int l = 0; l < a1.size(); l++)
//			{
//				cout << a1[l] << ' ';
//				m = 1;
//			}
//			cout << endl;
//			k = 0;
//		}
//	}
//	if (m == 0)
//	{
//		for (int l = 0; l < a1.size(); l++)
//		{
//			cout << a1[l] << ' ';
//		}
//		cout << endl;
//	}
//	return 0;
//}