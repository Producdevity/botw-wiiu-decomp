extern "C" void fn_0344e908(float);
extern "C" void* fn_037966a8(void*);

namespace {
struct Inner {
    char padding_0[0x12B8];
    float value;
};
}

extern "C" void fn_02cf87c4(void** handle) {
    if (fn_037966a8(*handle) != 0) {
        fn_0344e908(((Inner*)*handle)->value);
    }
}
