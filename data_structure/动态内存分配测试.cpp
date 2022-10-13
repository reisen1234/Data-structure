//#include <iostream>
//#include <string.h>
//using namespace std;
//int* malloc_memory(int size, int value) {
//    int* a = new int[size];
//    for (int i = 0; i < size; i++)
//    {
//        a[i] = value;
//    }
//    return a;
//}
//
//void free_memory(int type, int* p) {
//    if (type == 1)
//    {
//        delete p;
//    }
//    else
//    {
//        delete[] p;
//    }
//}
//
//char* copy_string(const char* s) {
//    char* s1;
//    s1 = new char[strlen(s) + 1];
//    if (s1 != NULL)
//    {
//        strcpy(s1, s);
//    }
//    return s1;
//}
//int main()
//{
//    int size, value;
//    cin >> size >> value;
//    int* a = malloc_memory(size, value);
//    int* a1 = new int;
//    free_memory(size, a1);
//    char *s1 = copy_string("hello world");
//	return 0;
//}