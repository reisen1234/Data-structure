////struct STACK{
////    int*    base;
////    int*    top;
////    int     capacity;
////    
////    STACK(int size);
////    ~STACK();
////    void    push( int value );
////    int     top_element();
////    void    pop();
////    bool    empty();
////    bool    full();
////};
////
//// ���캯������Ӧ���������ʼ��
//// size Ϊջ������
//STACK::STACK(int size) {
//    capacity = size;
//    base = new int[size];
//    top = base;
//}
//
////������������Ӧ��������������ٲ���
//STACK::~STACK() {
//    delete[]base;
//    base = NULL;
//}
//
//// ѹջ����valueѹ��ջ��
//void STACK::push(int value) {
//    *top = value;
//    *top++;
//}
//
//// ��ȡջ��Ԫ��
//int STACK::top_element() {
//    int* p = top;
//    *p--;
//    return *p;
//}
//
//// ��ջ��Ԫ�ص���
//void STACK::pop() {
//    *top--;
//}
//
//// �ж�ջ�Ƿ�Ϊ��
//bool STACK::empty() {
//    return top == base;
//}
//
//// �ж�ջ�Ƿ�Ϊ��
//bool STACK::full() {
//    int* s = top;
//    *s--;
//    return s == base + (capacity - 1);
//}