typedef signed char s8;
typedef int s32;

extern "C" void fn_02a2fcdc(void*, void*);

extern "C" void *data_104637ac;

extern "C" s32 fn_0271edc4(void *arg0) {
    if ((void *) data_104637ac != 0) {
        fn_02a2fcdc(data_104637ac, (*(void **)((char *)(arg0) + (0))));
    }
    (*(s8 *)((char *)(arg0) + (0x60))) = 0;
    (*(s8 *)((char *)(arg0) + (0x61))) = 0;
    return 1;
}
