typedef int s32;

extern "C" void fn_02de5ab8(void*, int);
extern "C" void fn_02de6728(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" s32 data_101ee44c;
extern "C" s32 data_101ee474;

extern "C" void fn_02de3778(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0))) = &data_101ee44c;
        (*(s32 **)((char *)(arg0) + (0x134))) = &data_101ee474;
        fn_02de5ab8((char *)arg0 + 0x1C8, 2);
        fn_02de5ab8((char *)arg0 + 0x1BC, 2);
        fn_02de6728((char *)arg0 + 4, 0U);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
