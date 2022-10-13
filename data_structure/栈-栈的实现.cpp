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
//// 构造函数，你应该在这里初始化
//// size 为栈的容量
//STACK::STACK(int size) {
//    capacity = size;
//    base = new int[size];
//    top = base;
//}
//
////析构函数，你应该在这里进行销毁操作
//STACK::~STACK() {
//    delete[]base;
//    base = NULL;
//}
//
//// 压栈，把value压入栈中
//void STACK::push(int value) {
//    *top = value;
//    *top++;
//}
//
//// 获取栈顶元素
//int STACK::top_element() {
//    int* p = top;
//    *p--;
//    return *p;
//}
//
//// 将栈顶元素弹出
//void STACK::pop() {
//    *top--;
//}
//
//// 判断栈是否为空
//bool STACK::empty() {
//    return top == base;
//}
//
//// 判断栈是否为空
//bool STACK::full() {
//    int* s = top;
//    *s--;
//    return s == base + (capacity - 1);
//}