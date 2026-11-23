typedef int s32;

extern "C" int fn_024b60f8(void);
extern "C" int fn_0310d4b4(void*, void*);
extern "C" void* data_1046ca84;

extern "C" s32 fn_0308812c(void *arg0) {
    void* const* vt1;
    s32 temp_r31;
    void *temp_r31_2;

    temp_r31_2 = data_1046ca84;
    if (temp_r31_2 == 0) {
        return 0;
    }
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(arg0) + (4)))[7])(arg0);
    temp_r31 = fn_0310d4b4(temp_r31_2, (*(void **)((char *)(arg0) + (0))));
    return temp_r31 * fn_024b60f8();
}
