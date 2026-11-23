typedef int s32;

extern "C" void fn_031a24a4(void*, void*);

extern "C" void *data_1046d224;

extern "C" void fn_031a3908(void **arg0) {
    void* const* vt1;
    fn_031a24a4(data_1046d224, arg0);
    if (arg0 != 0) {
        ((s32 (*)(void **, s32))(vt1 = *(void* const**)&(*arg0))[5])(arg0, 3);
    }
}
