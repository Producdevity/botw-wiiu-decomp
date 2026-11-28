extern "C" void fn_02d6b514(void*);
extern "C" void fn_030ea2cc(void*);

extern "C" float data_101dd848;

namespace {
struct Inner {
    char padding_0[0x260];
    float value;
};
}

extern "C" void fn_02cf9f54(void** handle) {
    fn_02d6b514(*handle);
    if (!(((Inner*)*handle)->value > data_101dd848)) {
        fn_030ea2cc(handle);
    }
}
