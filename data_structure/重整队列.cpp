////struct SEQUENCE{
////    int size; // Ԥ���ߴ�
////    int count; // ��ǰ����
////    int* data; // ����
////};
//
//
//void reform_sequence(SEQUENCE& src, SEQUENCE& des) {
//	int* arr = new int[1000000], max = 0;
//	for (int i = 0; i < src.count; i++)
//	{
//		if (arr[src.data[i]] != 1)
//		{
//			if (src.data[i] > max)max = src.data[i];
//			arr[src.data[i]] = 1;
//			des.count++;
//		}
//	}
//	int j = 0;
//	for (int i = 0; i <= max; i++)
//	{
//		if (arr[i] == 1)
//		{
//			des.data[j++] = i;
//		}
//	}
//	delete[] arr;
//}