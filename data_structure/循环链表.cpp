////struct Node{
////    int value;
////    Node* next;
////};
//Node* create_list() {// 创建循环链表，注意next要正确设置
//	Node* head = new Node;
//	head->next = head;
//	return head;
//}
//
//void append_node(Node* head, int value) { // 向尾部添加值
//	Node* pmove = head;
//	while (pmove->next != head)
//	{
//		pmove = pmove->next;
//	}
//	Node* newnode = new Node;
//	newnode->value = value;
//	pmove->next = newnode;
//	newnode->next = head;
//}
//
//
//void insert_before(Node* node, int value) {  // 在node的前面插入节点，值为value
//	Node* pmove = node;
//	while (pmove->next != node)
//	{
//		pmove = pmove->next;
//	}
//	Node* newnode = new Node;
//	newnode->value = value;
//	newnode->next = node;
//	pmove->next = newnode;
//}
//
//void delete_node(Node* node) { // 删除节点node，需要回收内存
//	Node* pmove = node;
//	while (pmove->next != node)pmove = pmove->next;
//	pmove->next = node->next;
//	delete node;
//}
