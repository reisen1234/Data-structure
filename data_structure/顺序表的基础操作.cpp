////struct SEQUENCE {
////    int reserved_size{ 0 }; // �������Ŀռ�
////    int size{ 0 }; // ��ǰ����Ŀռ�
////    int* data{ nullptr }; // ָ�����ռ��ָ��
////};
//
//void append_sequence(SEQUENCE& seq, int value) { // ��ӵ����β��
//    int i = seq.size;
//    seq.data[i] = value;
//    seq.size++;
//}
//
//int search_value(SEQUENCE& seq, int value) { // Ѱ��ֵΪvalue��Ԫ�ص��±�
//    for (int i = 0; i < seq.size; i++)
//    {
//        if (seq.data[i] == value)
//        {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void insert_into(SEQUENCE& seq, int index, int value) { // ��indexλ�ò���value
//    int t = 0, i = 0;
//    for (i = seq.size - 1; i >= index - 1; i--)
//    {
//        seq.data[i + 1] = seq.data[i];
//    }
//    seq.data[index] = value;
//    seq.size++;
//    seq.reserved_size++;
//}
//
//void remove_element(SEQUENCE& seq, int index) { // ɾ��index����Ԫ��
//    for (int i = index; i < seq.size - 1; i++)
//    {
//        seq.data[i] = seq.data[i + 1];
//    }
//    seq.size--;
//    seq.reserved_size--;
//}