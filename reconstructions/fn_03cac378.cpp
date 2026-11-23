typedef int s32;

extern "C" void fn_0434d1c8(void*, void*, int);

extern "C" s32 fn_03cac378(void *arg0, void *arg1) {
    struct { s32 f8; } sp;

    if (arg1 == 0) {
        return -1;
    }
    sp.f8 = (*(s32 *)((char *)(arg0) + (0x30)));
    fn_0434d1c8(arg1, &sp.f8, 4);
    return 0;
}
