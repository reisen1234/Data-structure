////struct BTreeNode{
////    int value{0};
////    int height{0};
////    BTreeNode* parent{nullptr};
////    BTreeNode* left_child{nullptr};
////    BTreeNode* right_child{nullptr};
////    BTreeNode( int value ){
////        this->value = value;
////    }
////    BTreeNode(){
////        this->value = 0;
////    }
////};
//#include <iostream>
//#include <queue>
//#include <stack>
//using namespace std;
//int max(int a, int b)
//{
//    return a > b ? a : b;
//}
//int height(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return 1 + max(height(node->left_child), height(node->right_child));
//}
//void update_all_height(BTreeNode* node)
//{
//    queue<BTreeNode*>q;
//    q.push(node);
//    while (!q.empty())
//    {
//        BTreeNode* T = q.front();
//        T->height = height(T);
//        q.pop();
//        if (T->left_child)q.push(T->left_child);
//        if (T->right_child)q.push(T->right_child);
//    }
//}
//int getbalance(BTreeNode* node)
//{
//    if (node == NULL)return 0;
//    return height(node->left_child) - height(node->right_child);
//}
//void show_insert_type(BTreeNode* node) {
//    BTreeNode* T = node;
//    while (T->parent->value != -1)
//    {
//        T = T->parent;
//    }
//    update_all_height(T);
//    queue<BTreeNode*>q;
//    q.push(T);
//    while (!q.empty())
//    {
//        BTreeNode* N = q.front();
//        int bf = getbalance(q.front());
//        q.pop();
//        int lb = getbalance(N->left_child);
//        int rb = getbalance(N->right_child);
//        if (bf > 1)
//        {
//
//            if (lb == 1)
//            {
//                cout << N->value << " LL" << endl;
//            }
//            else if (lb == -1)
//            {
//                cout << N->value << " LR" << endl;
//            }
//            return;
//        }
//        else if (bf < -1)
//        {
//            if (rb == -1)
//            {
//                cout << N->value << " RR" << endl;
//            }
//            else if (rb == 1)
//            {
//                cout << N->value << " RL" << endl;
//            }
//            return;
//        }
//    }
//    cout << "None" << endl;
//}