//struct BTreeNode {
//    int weight;
//    BTreeNode* left_child;
//    BTreeNode* right_child;
//};
//int s = 0;
//int count_(BTreeNode* root, int path) {
//    if (root->left_child == nullptr && root->right_child == nullptr) {
//        s += path * root->weight;
//    }
//    else {
//        if (root->left_child) {
//            count_(root->left_child, path + 1);
//        }
//        if (root->right_child) {
//            count_(root->right_child, path + 1);
//        }
//    }
//}
//int count_weight_path(BTreeNode* root) {
//    count_(root, 0);
//    return s;
//}
