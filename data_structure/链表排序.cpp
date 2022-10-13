////struct Node{
////    int   value;
////    Node* next{nullptr};
////};
//#include <vector>
//#include <algorithm>
//void creatnewnode(Node* p, int value)
//{
//	Node* newnode = new Node;
//	newnode->value = value;
//	p->next = newnode;
//	newnode->next = NULL;
//}
//Node* create_list(vector<int>data, int size) {
//	Node* head = new Node;
//	Node* pmove = head;
//	for (int i = 0; i < size; i++)
//	{
//		creatnewnode(pmove, data[i]);
//		pmove = pmove->next;
//	}
//	return head;
//}
//void remove_value(Node* head) {
//	Node* pmove = head->next;
//	Node* p = head;
//	while (pmove != NULL)
//	{
//		Node* tmp = pmove;
//		p->next = pmove->next;
//		delete tmp;
//		pmove = p->next;
//	}
//	delete head;
//}
//Node* sort_list(Node* head) {
//	vector<int>arr;
//	Node* pmove = head->next;
//	while (pmove != NULL)
//	{
//		arr.push_back(pmove->value);
//		pmove = pmove->next;
//	}
//	sort(arr.begin(), arr.end());
//	Node* Head = create_list(arr, arr.size());
//	pmove = head;
//	remove_value(head);
//	return Head;
//}