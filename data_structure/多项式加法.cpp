////#include<iostream>
////
////using namespace std;
////struct PolyNode{
////    int coef;
////    int pow;
////    PolyNode* next{nullptr};
////};
////
//PolyNode* polynomial_add(const PolyNode* p1, const PolyNode* p2) {
//    PolyNode* p1move = NULL;
//    PolyNode* p2move = NULL;
//    if (p1) p1move = p1->next;
//    if (p2) p2move = p2->next;
//    PolyNode* new_head = new PolyNode;
//    PolyNode* P = new_head;
//    while (p1move && p2move) {
//        if (p1move->pow == p2move->pow) {
//            if (p1move->coef + p2move->coef != 0)
//            {
//                PolyNode* newnode = new PolyNode;
//                newnode->pow = p1move->pow;
//                newnode->coef = p1move->coef + p2move->coef;
//                P->next = newnode;
//                P = newnode;
//            }
//            p1move = p1move->next;
//            p2move = p2move->next;
//        }
//        else if (p1move->pow < p2move->pow) {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p1move->pow;
//            newnode->coef = p1move->coef;
//            P->next = newnode;
//            P = newnode;
//            p1move = p1move->next;
//        }
//        else {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p2move->pow;
//            newnode->coef = p2move->coef;
//            P->next = newnode;
//            P = newnode;
//            p2move = p2move->next;
//        }
//    }
//
//    if (p1move) {
//        while (p1move) {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p1move->pow;
//            newnode->coef = p1move->coef;
//            P->next = newnode;
//            P = newnode;
//            p1move = p1move->next;
//        }
//    }
//    else if (p2move) {
//        while (p2move) {
//            PolyNode* newnode = new PolyNode;
//            newnode->pow = p2move->pow;
//            newnode->coef = p2move->coef;
//            P->next = newnode;
//            P = newnode;
//            p2move = p2move->next;
//        }
//    }
//    return new_head;
//}
