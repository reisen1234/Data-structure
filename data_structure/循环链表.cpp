////struct Node{
////    int value;
////    Node* next;
////};
//Node* create_list() {// ����ѭ������ע��nextҪ��ȷ����
//	Node* head = new Node;
//	head->next = head;
//	return head;
//}
//
//void append_node(Node* head, int value) { // ��β�����ֵ
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
//void insert_before(Node* node, int value) {  // ��node��ǰ�����ڵ㣬ֵΪvalue
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
//void delete_node(Node* node) { // ɾ���ڵ�node����Ҫ�����ڴ�
//	Node* pmove = node;
//	while (pmove->next != node)pmove = pmove->next;
//	pmove->next = node->next;
//	delete node;
//}
