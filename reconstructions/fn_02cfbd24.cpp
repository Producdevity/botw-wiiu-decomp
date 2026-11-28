extern "C" void fn_02d6b514(void*);
extern "C" void fn_030ea2cc(void*);

extern "C" float data_101ddc54;

namespace {
struct Inner {
    char padding_0[0x260];
    float value;
};
}

extern "C" void fn_02cfbd24(void** handle) {
    fn_02d6b514(*handle);
    if (!(((Inner*)*handle)->value > data_101ddc54)) {
        fn_030ea2cc(handle);
    }
}
