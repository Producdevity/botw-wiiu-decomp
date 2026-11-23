typedef int s32;

extern "C" void fn_03a77668(void *);

extern "C" void **data_1047e660;

extern "C" void fn_03a804b8(s32 arg0) {
    void* const* vt1;
    ((s32 (*)(void **))(vt1 = *(void* const**)&(*data_1047e660))[9])(data_1047e660);
    fn_03a77668((void *)(arg0 + 0x1D0));
}
