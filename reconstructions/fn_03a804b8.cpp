typedef int s32;

extern "C" void fn_03a77668(void *);

extern "C" void **data_1047e660;

extern "C" void fn_03a804b8(s32 address) {
    ((s32 (*)(void **))(*(void* const**)data_1047e660)[9])(data_1047e660);
    fn_03a77668((void *)(address + 0x1D0));
}
