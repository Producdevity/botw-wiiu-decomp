typedef int s32;

extern "C" void fn_03548814(void*);
extern "C" void fn_03557dbc(void*, void*);

extern "C" void fn_03557ed0(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x138))) == 1) {
        fn_03548814((char *)arg0 + 0xC);
        fn_03557dbc(arg0, (char *)arg0 + 0x140);
    }
}
