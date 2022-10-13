////struct LOOP_QUEUE {
////    int* base;
////    int* front;
////    int* rear;
////    int  capacity;
////    int  size;
////
////    LOOP_QUEUE( int n );
////    ~LOOP_QUEUE();
////    void in( int value );
////    int  front_element() const;
////    void out();
////    bool empty() const;
////    bool full() const;
////};
//
//// ���캯������ʼ��
//// ����Ԥ��n��Ԫ��
//int F = 0, R = 0;
//LOOP_QUEUE::LOOP_QUEUE(int n) {
//    capacity = n;
//    base = new int[n];
//    front = NULL;
//    size = 0;
//}
//
//// ���٣������ڴ�
//LOOP_QUEUE::~LOOP_QUEUE() {
//    delete[] base;
//    base = NULL;
//}
//
//// �����У�Ԫ��ֵΪvalue
//void LOOP_QUEUE::in(int value) {
//    base[R] = value;
//    R = (R + 1) % capacity;
//    size++;
//}
//
//// ��ö�ͷԪ�ص�ֵ
//int  LOOP_QUEUE::front_element() const {
//    int a = base[F];
//    return a;
//}
//
//// ������
//void LOOP_QUEUE::out() {
//    F = (F + 1) % capacity;
//    size--;
//}
//
//// �ж϶����Ƿ�Ϊ��
//bool LOOP_QUEUE::empty() const {
//    if (size == 0)
//    {
//        return true;
//    }
//    else
//        return false;
//}
//
//// �ж϶����Ƿ�����
//bool LOOP_QUEUE::full() const {
//    if (size == capacity)
//        return true;
//    else
//        return false;
//}