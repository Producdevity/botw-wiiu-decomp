typedef int s32;

extern "C" s32 data_10555430;

extern "C" s32 fn_034e11e4(void) {
    void* const* vt1;
    ((s32 (*)(s32 *))(vt1 = *(void* const**)((char *)(&data_10555430) + (4)))[7])(&data_10555430);
    return (*(s32 *)((char *)(&data_10555430) + (0)));
}
