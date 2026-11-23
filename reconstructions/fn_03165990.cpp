typedef int s32;

extern "C" void fn_037e5f68(void *);
extern "C" void fn_037efe7c(void*, void*);

extern "C" void *data_1047c3c8;

extern "C" void fn_03165990(void *arg0) {
    if (((s32) (*(s32 *)((char *)(arg0) + (0xB0))) != 0) || ((s32) (*(s32 *)((char *)(arg0) + (0xAC))) != 0)) {
        fn_037efe7c(data_1047c3c8, (char *)arg0 + 0xAC);
    }
    fn_037e5f68((char *)arg0 + 0x7C);
}
