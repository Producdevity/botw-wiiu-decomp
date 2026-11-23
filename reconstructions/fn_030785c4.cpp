typedef int s32;

extern "C" int fn_03078584(void);
extern "C" int fn_0310e844(void*, void*, void*);
extern "C" void* data_1046ca84;
extern "C" void* data_1047b054;

extern "C" s32 fn_030785c4(void) {
    void* const* vt1;
    void *temp_r31;

    temp_r31 = data_1047b054;
    ((s32 (*)(void *))(vt1 = *(void* const**)((char *)(temp_r31) + (0x24)))[7])((char *)temp_r31 + 0x20);
    if ((fn_0310e844(data_1046ca84, (*(void **)((char *)(temp_r31) + (0x20))), (void *)0xDCD7E698) != 0) || (fn_03078584() != 0)) {
        return 0;
    }
    return 1;
}
