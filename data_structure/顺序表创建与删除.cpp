//#include <iostream>
//using namespace std;
////struct SEQUENCE{
////    int size;   // �������Ŀռ�
////    int count;  // ���е�����
////    int* data;  // dataָ��
////};
//void create_sequence(SEQUENCE& seq) {
//	int n = 0;
//	cin >> n;
//	seq.size = n;
//	seq.count = 0;
//	seq.data = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> seq.data[i];
//		seq.count++;
//	}
//	int m;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a; cin >> a;
//		for (int j = a; j < seq.count - 1; j++)
//		{
//			seq.data[j] = seq.data[j + 1];
//		}
//		seq.count--;
//	}
//}
//
//void destroy_sequence(SEQUENCE& seq) {
//	delete[] seq.data;
//}