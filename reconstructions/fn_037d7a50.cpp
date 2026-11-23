typedef int s32;

extern "C" void fn_037d79e4(void*);
extern "C" void fn_037d7a38(void*);

extern "C" void fn_037d7a50(void *arg0) {
    if (((s32) (*(s32 *)((char *)(arg0) + (0x7C))) == 0) || (fn_037d79e4(arg0), (((s32) (*(s32 *)((char *)(arg0) + (0x7C))) == 0) != 0))) {
        fn_037d7a38(arg0);
    }
}
