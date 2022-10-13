////typedef struct {
////  int id;
////	char msg[20];
////} RECORD;
////
////typedef struct {
////	int size;
////	int cur_record;
////	RECORD* buf;
////	int last_record;
////} RECORD_QUEUE;
//
//void init_record_queue(RECORD_QUEUE& queue, int size) // 注意，参数是引用，内部修改会改变他的值
//{
//    queue.size = size;
//    RECORD* msg = new RECORD[size];
//    queue.buf = msg;
//    queue.last_record = 1;
//}
//
//void destroy_record_queue(RECORD_QUEUE& queue)
//{
//    delete[] queue.buf;
//}
//
//void log_msg(RECORD_QUEUE& queue, const std::string& s) // 是引用传递
//{
//    if (queue.cur_record == queue.size)
//    {
//        queue.cur_record = 0;
//    }
//    int i = 0;
//    i = queue.cur_record;
//    queue.buf[i].id = queue.last_record;
//    queue.buf[i].msg = s;
//    queue.cur_record++;
//    queue.last_record++;
//}
//
//void show_logs(const RECORD_QUEUE& queue) // const引用，可读不可写
//{
//    int j = queue.cur_record - 1;
//    for (int i = 0; i < queue.size; i++)
//    {
//        if (queue.buf[j].id != 0)
//        {
//            cout << queue.buf[j].id << ' ' << queue.buf[j].msg << endl;
//        }
//        j--;
//        if (j == -1)
//        {
//            j = queue.size - 1;
//        }
//    }
//}