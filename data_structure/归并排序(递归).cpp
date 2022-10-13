//#include <iostream>
//#include <vector>
//using namespace std;
//void Cout_All_Data(vector<int>arr)
//{
//	for (int i = 0; i < arr.size(); i++)
//		cout << arr[i] << " ";
//	cout << endl;
//}
//void merge(vector<int>&arr, vector<int> tmp, int left, int mid, int right)
//{
//	int l_pos = left;
//	int r_pos = mid + 1;
//	int pos = left;
//	while (l_pos <= mid && r_pos <= right)
//	{
//		if (arr[l_pos] < arr[r_pos])tmp[pos++] = arr[l_pos++];
//		else tmp[pos++] = arr[r_pos++];
//	}
//	while (l_pos <= mid)tmp[pos++] = arr[l_pos++];
//	while (r_pos <= right)tmp[pos++] = arr[r_pos++];
//	while (left <= right)
//	{
//		arr[left] = tmp[left];
//		left++;
//	}
//	Cout_All_Data(arr);
//}
//void msort(vector<int>&arr, vector<int>tmp, int left, int right)
//{
//	if (left < right)
//	{
//		int mid = (left + right) / 2;
//		msort(arr, tmp, left, mid);
//		msort(arr, tmp, mid + 1, right);
//		merge(arr, tmp, left, mid, right);
//	}
//}
//int main()
//{
//	int d = 0;
//	cin >> d;
//	vector<int>arr(d);
//	vector<int>tmp(d);
//	for (int i = 0; i < d; i++)cin >> arr[i];
//	msort(arr, tmp, 0, d - 1);
//	Cout_All_Data(arr);
//	return 0;
//}