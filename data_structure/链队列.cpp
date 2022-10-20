////struct Node{
////    int     value;
////    Node*   next{nullptr};
////};
////
////struct LinkQueue{
////    // 可以不全部使用
////    Node* header{nullptr};
////    Node* front{nullptr};
////    Node* tail{nullptr};
////
////    LinkQueue();
////    ~LinkQueue();
////
////    void in( int value );
////    void out();
////    int  front_element( ) const;
////    bool empty() const;
////};
//Node* create_list() { // 创建链表
//    struct Node* newnode = new struct Node;
//    newnode->next = NULL;
//    return newnode;
//}
//void destroy_list(Node* header) {// 销毁链表
//    while (header->next != NULL)
//    {
//        struct Node* pmove = header->next;
//        struct Node* p = header;
//        struct Node* d = header->next;
//        p->next = pmove->next;
//        delete d;
//    }
//    delete header;
//}
//Node* insert_after(Node* node, int value) { // 插入节点node的后面。
//    struct Node* newnode = new struct Node;
//    newnode->next = NULL;
//    newnode->next = node->next;
//    node->next = newnode;
//    newnode->value = value;
//    return newnode;
//}
//
//LinkQueue::LinkQueue() {   // 构造函数，初始化
//    header = new Node;
//    tail = header;
//}
//
//LinkQueue::~LinkQueue() {  // 析构函数，销毁
//    destroy_list(header);
//}
//
//void LinkQueue::in(int value) {  //将value放进队列
//    tail = insert_after(tail, value);
//}
//
//void LinkQueue::out() {   // 弹出一个元素
//    Node* S = header->next;
//    if (S == tail) {
//        if (S->next)tail = S->next;
//        else tail = header;
//    }
//    header->next = S->next;
//    delete S;
//}
//
//int LinkQueue::front_element() const {  // 获得队头元素的值
//    return header->next->value;
//}
//
//bool LinkQueue::empty() const {  //判断队列是否为空
//    if (header->next == NULL)return true;
//    else return false;
//}
