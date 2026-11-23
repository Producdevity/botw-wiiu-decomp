typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02e91f88(void*);

extern "C" u8 data_1046991c;

extern "C" void fn_02e9c9e0(void *arg0) {
    void* const* vt1;
    fn_02e91f88(arg0);
    if ((s32) data_1046991c != 0) {
        ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0x3C)))[49])(arg0, 0);
    }
}
