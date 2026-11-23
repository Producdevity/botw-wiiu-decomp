typedef int s32;

extern "C" void fn_034ebca0(void*, void*);
extern "C" void fn_03984eec(void*);

extern "C" void fn_033c8608(void *arg0, s32 arg1) {
    void *temp_r3;

    fn_034ebca0((char *)arg0 + 4, (void *) arg1);
    temp_r3 = (*(void **)((char *)(arg0) + (0)));
    if (temp_r3 != 0) {
        fn_03984eec(temp_r3);
    }
    (*(s32 *)((char *)(arg0) + (0x20))) = 1;
}
