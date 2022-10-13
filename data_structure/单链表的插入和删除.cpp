////struct NODE{
////    int value;
////    NODE* next;
////};
//NODE* find_node(NODE* header, int value) { // ËÑË÷½Úµã
//    struct NODE* pmove = header->next;
//    int i = 0;
//    while (pmove)
//    {
//        if (pmove->value == value)
//        {
//            i = 1;
//            break;
//        }
//        pmove = pmove->next;
//    }
//    if (i == 1)
//        return pmove;
//    else
//        return nullptr;
//}
//
//void insert_after(NODE* node, int value) {
//    struct NODE* newnode = new struct NODE;
//    newnode->next = NULL;
//    newnode->next = node->next;
//    node->next = newnode;
//    newnode->value = value;
//}
//
//NODE* find_pre_node(NODE* header, NODE* node) {
//    struct NODE* pmove = header->next;
//    struct NODE* p = header;
//    while (pmove)
//    {
//        if (pmove == node)
//        {
//            return p;
//        }
//        pmove = pmove->next;
//        p = p->next;
//    }
//    return nullptr;
//}
//
//void insert_before(NODE* header, NODE* node, int value) {
//    struct NODE* p = header;
//    while (p->next != node)
//    {
//        p = p->next;
//    }
//    struct NODE* newnode = new struct NODE;
//    newnode->value = value;
//    newnode->next = node;
//    p->next = newnode;
//}
//
//void remove_node(NODE* header, NODE* node) {
//    struct NODE* pmove = header;
//    while (pmove)
//    {
//        if (pmove->next == node)
//        {
//            break;
//        }
//        pmove = pmove->next;
//    }
//    pmove->next = node->next;
//    delete node;
//}