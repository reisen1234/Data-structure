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
//// 计算树的深度（高度）
//int tree_depth(BTreeNode* root) {
//    int max = 0, hr = 0, hl = 0;
//    if (root)
//    {
//        hr = tree_depth(root->left_child);
//        hl = tree_depth(root->right_child);
//        max = (hr > hl) ? hr : hl;
//        return (max + 1);
//    }
//    else
//    {
//        return 0;
//    }
//}
//
//// 销毁树
//void destroy_tree(BTreeNode* root) {
//    if (root == NULL)
//        return;
//    if (root->left_child != NULL)
//    {
//        destroy_tree(root->left_child);
//        root->left_child == NULL;
//    }
//    if (root->right_child != NULL)
//    {
//        destroy_tree(root->right_child);
//        root->right_child == NULL;
//    }
//    if (root != NULL)
//    {
//        delete root;
//        root = NULL;
//    }
//}
//
//// 先序遍历
//void walk_tree_vlr(BTreeNode* root) {
//    if (root)
//    {
//        // 输出格式
//        cout << root->value << " ";
//        walk_tree_vlr(root->left_child);
//        walk_tree_vlr(root->right_child);
//    }
//}
//
//// 中序遍历
//void walk_tree_lvr(BTreeNode* root) {
//    if (root)
//    {
//        walk_tree_lvr(root->left_child);
//        // 输出格式
//        cout << root->value << " ";
//        walk_tree_lvr(root->right_child);
//    }
//}
//
//// 后序遍历
//void walk_tree_lrv(BTreeNode* root) {
//    if (root)
//    {
//        walk_tree_lrv(root->left_child);
//        walk_tree_lrv(root->right_child);
//        // 输出格式
//        cout << root->value << " ";
//    }
//}