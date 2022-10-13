////struct SEQUENCE {
////    int reserved_size{ 0 }; // 总体分配的空间
////    int size{ 0 }; // 当前分配的空间
////    int* data{ nullptr }; // 指向分配空间的指针
////};
//
//void append_sequence(SEQUENCE& seq, int value) { // 添加到表的尾部
//    int i = seq.size;
//    seq.data[i] = value;
//    seq.size++;
//}
//
//int search_value(SEQUENCE& seq, int value) { // 寻找值为value的元素的下标
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
//void insert_into(SEQUENCE& seq, int index, int value) { // 在index位置插入value
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
//void remove_element(SEQUENCE& seq, int index) { // 删除index处的元素
//    for (int i = index; i < seq.size - 1; i++)
//    {
//        seq.data[i] = seq.data[i + 1];
//    }
//    seq.size--;
//    seq.reserved_size--;
//}