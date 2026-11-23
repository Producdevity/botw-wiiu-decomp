typedef int s32;

extern "C" void fn_02b27174(void*);

extern "C" void fn_02488fd0(void *arg0) {
    if ((s32) (*(s32 *)((char *)(arg0) + (0x1CD0))) != 0) {
        fn_02b27174((char *)arg0 + 0x1B64);
    }
    if ((s32) (*(s32 *)((char *)(arg0) + (0x1E44))) != 0) {
        fn_02b27174((char *)arg0 + 0x1CD8);
    }
}
