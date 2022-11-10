////struct BTreeNode {
////    int value;
////    BTreeNode* left_child;
////    BTreeNode* right_child;
////};
//BTreeNode* Insert_Root(BTreeNode& root, int value, int child) {
//	BTreeNode* newnode = new BTreeNode();
//	newnode->value = value;
//	if (child == 0)
//		root.left_child = newnode;
//	else
//		root.right_child = newnode;
//	return newnode;
//}
//BTreeNode* sequence_to_tree() {
//	vector<BTreeNode*>arr(100000);
//	BTreeNode* root = new BTreeNode();
//	arr[0] = root;
//	int value = 0, i = 1;
//	while (cin >> value) {
//		if (value != 0) {
//			if ((i / 2) * 2 + 1 == i) {//ÓÒ²åÈë
//				arr[i] = Insert_Root(*arr[i / 2], value, 1);
//			}
//			else if ((i / 2) * 2 == i) {
//				arr[i] = Insert_Root(*arr[i / 2], value, 0);
//			}
//		}
//		i++;
//	}
//	return root->right_child;
//}
