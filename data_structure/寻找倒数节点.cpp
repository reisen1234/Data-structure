////struct Node{
////    int value;
////    Node* next;
////};
////struct Node{
////    int value;
////    Node* next;
////};
//Node* find_last_node(Node* head, int k) {
//    int n = 0;
//    Node* pmove = head->next;
//    while (pmove != NULL)
//    {
//        n++;
//        pmove = pmove->next;
//    }
//    int last = n - k + 1;
//    pmove = head;
//    for (int i = 0; i < last; i++)
//    {
//        pmove = pmove->next;
//    }
//    return pmove;
//}