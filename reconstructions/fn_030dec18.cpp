typedef int s32;

extern "C" int fn_0308e5b4(int, void*, int, void*);
extern "C" void fn_0434c528(void*, void*, void*);

extern "C" void fn_030dec18(s32 *arg0, s32 arg1, void *arg2, void *arg3) {
    s32 temp_r3;

    if (arg1 > 0) {
        temp_r3 = fn_0308e5b4(arg1 * 0x10, arg2, 4, arg3);
        *arg0 = temp_r3;
        fn_0434c528((char *)arg0 + 4, (void *) temp_r3, (void *) arg1);
    }
}
