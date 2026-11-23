typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03c12090(void*, void*);

extern "C" s32 data_103dbba0;

extern "C" void fn_03c120b8(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0x214))) = &data_103dbba0;
        fn_03c12090((char *)arg0 + 0xC, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
