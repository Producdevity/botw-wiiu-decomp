extern "C" unsigned char data_1021d058[];
extern "C" unsigned char data_1021d060[];
extern "C" unsigned char data_1021d06c[];
extern "C" int fn_03a2fe80(int, void*, int);

extern "C" void fn_02ed0df4(void* arg0, int arg1) {
    if (arg1 != 0) {
        (*(int*)arg0) = arg1;
        (*(int*)((char*)arg0 + 4)) = fn_03a2fe80(arg1, data_1021d060, 0);
        (*(int*)((char*)arg0 + 8)) = fn_03a2fe80((*(int*)arg0), data_1021d06c, 1);
        (*(int*)((char*)arg0 + 12)) = fn_03a2fe80((*(int*)arg0), data_1021d058, 1);
    }
}
