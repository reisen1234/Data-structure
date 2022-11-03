////struct BTreeNode {
////    int value;
////    BTreeNode* left_child;
////    BTreeNode* right_child;
////    BTreeNode()
////        :value(0)
////        , left_child(nullptr)
////        , right_child(nullptr)
////    {}
////    BTreeNode( int v )
////        :value(v)
////        , left_child(nullptr)
////        , right_child(nullptr)
////    {}
////};
//#include <cmath>
//#include <queue>
//using namespace std;
//// 判断树是否是满二叉树
//int height(BTreeNode* root) {
//    if (root == NULL)return 0;
//    else return max(height(root->left_child), height(root->right_child)) + 1;
//}
//bool is_full_binary_tree(BTreeNode* root) {
//    if (root == NULL)return true;
//    return is_full_binary_tree(root->left_child) && is_full_binary_tree(root->right_child) && height(root->left_child) == height(root->right_child);
//}
//
//// 判断树是否是完全二叉树
//bool is_complete_binary_tree(BTreeNode* root) {
//    queue<BTreeNode*>arr;
//    arr.push(root);
//    while (!arr.empty()) {
//        BTreeNode* tmp = arr.front();
//        arr.pop();
//        if (!tmp)break;
//        arr.push(tmp->left_child);
//        arr.push(tmp->right_child);
//    }
//    while (!arr.empty()) {
//        BTreeNode* tmp = arr.front(); arr.pop();
//        if (tmp)return false;
//    }
//    return true;
//}