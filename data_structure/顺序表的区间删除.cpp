////struct SEQUENCE {
////    int  size; // Ԥ���Ŀռ�
////    int  count; // ��ǰ����Ŀ
////    int* data; // ����ָ��
////};
//
//void remove_batch(SEQUENCE& seq, int begin, int end) {
//	int k = end - begin;
//	for (int i = begin; i < seq.size - k; i++)
//	{
//		seq.data[i] = seq.data[i + k];
//	}
//	seq.count -= end - begin;
//}