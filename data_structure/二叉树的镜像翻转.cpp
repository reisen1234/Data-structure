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
//
//// Ê÷µÄ¾µÏñ·­×ª
//void reverse_tree(BTreeNode* root) {
//    if (root->left_child || root->right_child) {
//        BTreeNode* tmp = root->left_child;
//        root->left_child = root->right_child;
//        root->right_child = tmp;
//    }
//    if (root->left_child)reverse_tree(root->left_child);
//    if (root->right_child)reverse_tree(root->right_child);
//}