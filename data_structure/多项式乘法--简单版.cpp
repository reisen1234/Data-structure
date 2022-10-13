//#include <iostream>
//
//using namespace std;
//struct PolyNode{
//    int coef;
//    int pow;
//    PolyNode* next{nullptr};
//};
//PolyNode* polynomial_times_term(const PolyNode* p1, int coef, int pow) {
//    PolyNode* new_head = new PolyNode;
//    PolyNode* p = new_head;
//    PolyNode* pmove = p1->next;
//    while (pmove) {
//        PolyNode* newnode = new PolyNode;
//        newnode->coef = pmove->coef * coef;
//        newnode->pow = pmove->pow + pow;
//        p->next = newnode;
//        p = newnode;
//        pmove = pmove->next;
//    }
//    return new_head;
//}
