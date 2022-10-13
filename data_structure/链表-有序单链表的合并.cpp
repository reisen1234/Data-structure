////struct NODE {
////    int value{0};
////    NODE* next{nullptr};
////};
//
//NODE* list_merge(NODE* list1, NODE* list2) {
//    struct  NODE* header2 = new struct  NODE;
//    struct NODE* l1 = list1->next;
//    struct NODE* l2 = list2->next;
//    struct NODE* move = header2;
//    while (l1 && l2)
//    {
//        if (l1->value <= l2->value)
//        {
//            move->next = l1;
//            l1 = l1->next;
//        }
//        else
//        {
//            move->next = l2;
//            l2 = l2->next;
//        }
//        move = move->next;
//    }
//    if (l1 == NULL)
//    {
//        move->next = l2;
//    }
//    else
//    {
//        move->next = l1;
//    }
//    return header2;
//}