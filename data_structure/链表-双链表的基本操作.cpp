//NODE* create_list() {
//    struct NODE* newnode = new struct NODE;
//    newnode->next = newnode;
//    newnode->prev = newnode;
//    return newnode;
//}
//
//void destroy_list(NODE* header) {
//    struct NODE* move = header->prev;
//    while (move != header)
//    {
//        struct NODE* s = move;
//        move = move->prev;
//        delete s;
//    }
//    delete header;
//}
//
//NODE* find_node(NODE* header, int value) {
//    struct NODE* pmove = header;
//    do
//    {
//        if (pmove->value == value)
//        {
//            return pmove;
//        }
//        pmove = pmove->next;
//    } while (pmove != header);
//    return nullptr;
//}
//
//void insert_after(NODE* node, int value) {
//    struct NODE* newnode = new struct NODE;
//    newnode->next = NULL;
//    newnode->prev = NULL;
//    newnode->value = value;
//    if (node->next == node)
//    {
//        node->next = newnode;
//        node->prev = newnode;
//        newnode->prev = node;
//        newnode->next = node;
//    }
//    else
//    {
//        node->next->prev = newnode;
//        newnode->next = node->next;
//        node->next = newnode;
//        newnode->prev = node;
//    }
//}
//
//void insert_before(NODE* node, int value) {
//    struct NODE* newnode = new struct NODE;
//    newnode->next = NULL;
//    newnode->prev = NULL;
//    newnode->value = value;
//    if (node->next == node)
//    {
//        node->next = newnode;
//        node->prev = newnode;
//        newnode->prev = node;
//        newnode->next = node;
//    }
//    else
//    {
//        newnode->next = node;
//        newnode->prev = node->prev;
//        node->prev->next = newnode;
//        node->prev = newnode;
//    }
//}
//
//void remove_node(NODE* node) {
//    struct NODE* pmove = node;
//    node->prev->next = node->next;
//    node->next->prev = node->prev;
//    delete node;
//}
