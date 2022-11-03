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
//long sum = 0;
//int count_ = 0;
//// 计算树所有节点之和
//void cout_sum(BTreeNode* root){
//  if(root != NULL){
//    sum+=root->value;
//     cout_sum(root->left_child);
//    cout_sum(root->right_child);
//  }
//}
//void cout_num(BTreeNode* root){
//  if(root != NULL){
//    count_++;
//      cout_num(root->left_child);
//     cout_num(root->right_child);
//  }
//}
//int sum_of_tree( BTreeNode* root ){
//  cout_sum(root);
//    return sum;
//}
//
//// 计算树的节点数目
//int count_tree( BTreeNode* root ){
//  cout_num(root);
//    return count_;
//}
