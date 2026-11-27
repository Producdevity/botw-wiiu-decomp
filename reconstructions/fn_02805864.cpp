typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_027fe888(void*);

namespace {
struct State {
    char padding_0[0x28];
    s32 value;
};
}

extern "C" u8 fn_02805864(void *object) {
    int result = 0;

    if (fn_027fe888(object) != 0 && ((State *)fn_027fe888(object))->value == 0) {
        result = 1;
    }
    return result;
}
