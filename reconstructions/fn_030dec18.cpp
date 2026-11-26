typedef int s32;

extern "C" void* fn_0308e5b4(unsigned int, void*, int);
extern "C" void fn_0434c528(void*, void*, void*);

extern "C" void fn_030dec18(s32 *arg0, s32 arg1, void *arg2, void *arg3) {
    void *buffer;

    if (arg1 > 0) {
        buffer = fn_0308e5b4(arg1 * 0x10, arg2, 4);
        *arg0 = (s32) buffer;
        fn_0434c528((char *)arg0 + 4, buffer, (void *) arg1);
    }
}
