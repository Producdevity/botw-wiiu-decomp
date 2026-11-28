typedef unsigned char u8;
typedef int s32;

extern "C" void fn_02e84e80(int);
extern "C" void fn_02e858cc(int);

namespace {
struct Object {
    char padding_0[0x10];
    u8 *first;
    u8 *second;
};
}

extern "C" s32 fn_023a1cb0(void *object) {
    u8 *firstSource;
    u8 *secondSource;
    u8 first;
    u8 second;

    firstSource = ((Object *)object)->first;
    first = 0;
    if (firstSource != 0) {
        first = *firstSource;
    }
    fn_02e84e80((s32)first);
    secondSource = ((Object *)object)->second;
    second = 0;
    if (secondSource != 0) {
        second = *secondSource;
    }
    fn_02e858cc((s32)second);
    return 1;
}
