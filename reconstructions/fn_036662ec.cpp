typedef int s32;

extern "C" void fn_03666158(void*);
extern "C" void fn_036661d0(void*);

namespace {
struct Manager {
    unsigned char padding_0[0x530];
    s32 state;
};
}

extern "C" Manager *data_1047be88;

extern "C" void fn_036662ec(void *object) {
    if (data_1047be88->state != 3) {
        fn_03666158(object);
        fn_036661d0(object);
    }
}
