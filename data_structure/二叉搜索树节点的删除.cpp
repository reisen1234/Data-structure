////
////struct BTreeNode {
////    int value;
////    BTreeNode* left_child;
////    BTreeNode* right_child;
////    BTreeNode* parent;
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
////
//BTreeNode* Delete(BTreeNode* root, int value) {
//    if (value > root->value)
//    {
//        root->right_child = Delete(root->right_child, value);
//    }
//    else if (value < root->value)
//    {
//        root->left_child = Delete(root->left_child, value);
//    }
//    else
//    {
//        BTreeNode* tmp = root;
//        if (root->left_child != NULL && root->right_child != NULL)
//        {
//            BTreeNode* replace = root->right_child;
//            while (replace->left_child)
//            {
//                replace = replace->left_child;
//            }
//            root->value = replace->value;
//            root->right_child = Delete(root->right_child, replace->value);
//        }
//        else
//        {
//            tmp = root;
//            if (!root->left_child)
//            {
//                root = root->right_child;
//            }
//            else
//            {
//                root = root->left_child;
//            }
//            free(tmp);
//        }
//    }
//    return root;
//}
//void delete_bst_value(BTreeNode* root, int value)
//{
//    Delete(root, value);
//}
