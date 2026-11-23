typedef int s32;

extern "C" void fn_035487d8(void*, void*);

extern "C" void fn_0351abe4(void **arg0, void *arg1) {
    void* const* vt1;
    if (arg0 != 0) {
        fn_035487d8((char *)arg0 + 4, arg1);
        ((s32 (*)(void **, s32))(vt1 = *(void* const**)&(*arg0))[3])(arg0, 3);
    }
}
