typedef signed char s8;
typedef int s32;

extern "C" void fn_0317a908(void*, void*);

extern "C" s32 data_1046ce60;

extern "C" s32 fn_0317be2c(void *arg0) {
    if ((s32) data_1046ce60 != 0) {
        fn_0317a908((void *)(data_1046ce60 + 0x14), arg0);
        (*(s8 *)((char *)(arg0) + (0x26F))) = 0;
    }
    return 1;
}
