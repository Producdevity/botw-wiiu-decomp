typedef int s32;

extern "C" s32 fn_02f4a4cc(void *arg0) {
    void* const* vt1;
    if (arg0 == 0) {
        return 0;
    }
    ((s32 (*)())(vt1 = *(void* const**)((char *)(arg0) + (0x14)))[51])();
    return 1;
}
