////struct NODE{
////    int value;
////    NODE* next;
////};
//NODE* create_list() { // 创建链表
//    struct NODE* newnode = new struct NODE;
//    newnode->next = NULL;
//    return newnode;
//}
//
//void destroy_list(NODE* header) {// 销毁链表
//    while (header->next != NULL)
//    {
//        struct NODE* pmove = header->next;
//        struct NODE* p = header;
//        struct NODE* d = header->next;
//        p->next = pmove->next;
//        delete d;
//    }
//    delete header;
//}
//
//bool is_list_empty(NODE* header) { // 判空
//    if (header->next == NULL)
//        return true;
//    else
//        return false;
//
//}
//
//void insert_front(NODE* header, int value) { // 在链表头部插入元素
//    struct NODE* newnode = create_list();
//    newnode->value = value;
//    newnode->next = header->next;
//    header->next = newnode;
//}
//
//void insert_back(NODE* header, int value) { // 在链表尾部插入元素
//    struct NODE* pmove = header;
//    struct NODE* p = pmove;
//    while (pmove != NULL)
//    {
//        p = pmove;
//        pmove = pmove->next;
//    }
//    struct NODE* newnode = create_list();
//    newnode->value = value;
//    p->next = newnode;
//}
