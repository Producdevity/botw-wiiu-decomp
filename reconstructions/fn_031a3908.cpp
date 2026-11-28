typedef int s32;

extern "C" void fn_031a24a4(void*, void*);

extern "C" void *data_1046d224;

extern "C" void fn_031a3908(void **object) {
    void* const* vt1;
    fn_031a24a4(data_1046d224, object);
    if (object != 0) {
        ((s32 (*)(void **, s32))(vt1 = *(void* const**)&(*object))[5])(object, 3);
    }
}
