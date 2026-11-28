typedef int s32;

extern "C" void fn_02eb7a70(void*, void*);
extern "C" void fn_030731ec(int);
extern "C" void* data_10469978;

extern "C" void fn_03076e94(void *object, s32 flag) {
    if ((void *) data_10469978 != 0) {
        fn_02eb7a70(data_10469978, object);
    }
    if (flag != 0) {
        fn_030731ec(0xB);
    }
}
