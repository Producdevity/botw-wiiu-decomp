extern "C" void fn_02d7af44(void*, void*);
extern "C" void fn_030ea2cc(void*);
extern "C" bool fn_0370e3bc(void*, int, int);
extern "C" const unsigned char data_10549dd0[];

namespace {
struct Inner {
    char padding_0[0x394];
    void* value_394;
};
}

extern "C" void fn_02cd27f0(void** handle) {
    fn_02d7af44(*handle, (void*)data_10549dd0);
    if (fn_0370e3bc(((Inner*)*handle)->value_394, 0, 0) != 0) {
        fn_030ea2cc(handle);
    }
}
