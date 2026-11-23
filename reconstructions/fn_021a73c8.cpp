typedef int s32;

extern "C" void fn_021aac34(void*);
extern "C" void fn_02b61634(void*, void*, void*);
extern "C" void* fn_037966a8(void *);

extern "C" void fn_021a73c8(void **arg0) {
    struct { s32 f8; } sp;
    void *temp_r4;

    fn_021aac34(arg0);
    temp_r4 = fn_037966a8(*arg0);
    sp.f8 = 3;
    fn_02b61634((char *)arg0 + 0x28, temp_r4, &sp.f8);
}
