typedef int s32;

extern "C" void fn_038002f0(void*, void*);
extern "C" char* data_1047c3d8;

extern "C" void fn_03461998(void *arg0) {
    void* const* vt1;
    fn_038002f0(data_1047c3d8, arg0);
    if (arg0 != 0) {
        ((s32 (*)(void *, s32))(vt1 = *(void* const**)((char *)(arg0) + (0xC)))[13])(arg0, 3);
    }
}
