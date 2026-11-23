typedef int s32;

extern "C" void fn_02b27174(void*);

extern "C" void fn_02477344(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x14B0))) != 0) {
        fn_02b27174((char *)arg0 + 0x1344);
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (0x1624))) != 0) {
        fn_02b27174((char *)arg0 + 0x14B8);
    }
}
