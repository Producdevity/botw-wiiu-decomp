typedef int s32;

extern "C" int fn_03485c8c(void*);
extern "C" void fn_034a3fe8(void);

extern "C" void fn_0348d58c(void *arg0) {
    if (((*(s32 *)((char *)(arg0) + (0x50))) & 1) && ((s32) (*(s32 *)((char *)(arg0) + (0x80))) != 0) && (fn_03485c8c(arg0) != 0)) {
        fn_034a3fe8();
    }
}
