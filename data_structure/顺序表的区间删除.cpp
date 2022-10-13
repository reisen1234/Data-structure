////struct SEQUENCE {
////    int  size; // 预留的空间
////    int  count; // 当前的数目
////    int* data; // 数据指针
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