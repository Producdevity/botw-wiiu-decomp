typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03485a50(void *, void *);
extern "C" bool fn_03485c18(const void *);
extern "C" void fn_034868c0(void*, void*);

extern "C" s32 data_10346370;
extern "C" s32 data_103463e8;

extern "C" void fn_0396b1cc(void *arg0, s32 arg1) {
    if (arg0 != 0) {
        (*(s32 **)((char *)(arg0) + (0xC))) = &data_10346370;
        (*(s32 **)((char *)(arg0) + (0x10))) = &data_103463e8;
        if (fn_03485c18(arg0) != 0) {
            fn_034868c0(arg0, 0);
        }
        fn_03485a50(arg0, 0);
        if (arg1 & 1) {
            fn_0308e6d0(arg0);
        }
    }
}
