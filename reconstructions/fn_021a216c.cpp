typedef int s32;

extern "C" void fn_03077310(void*);

namespace {
struct State {
    unsigned char padding_0[0x14];
    s32 value;
};
}

extern "C" void *data_1046d6c8;

extern "C" s32 fn_021a216c(void *object) {
    if (data_1046d6c8 == 0) {
        return 0;
    }
    ((State *)data_1046d6c8)->value = 0;
    fn_03077310(object);
    return 1;
}
