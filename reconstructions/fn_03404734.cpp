typedef unsigned char u8;
typedef int s32;

namespace {
struct Owner {
    unsigned char padding_0[0x1E4];
    void *first;
    unsigned char padding_1E8[0x8BC - 0x1E8];
    void *second;
};
}

extern "C" void fn_038a42c4(void*, int);
extern "C" void fn_038b12d0(void*, int);

extern "C" void fn_03404734(void *object, u8 *value) {
    void *first = ((Owner *)object)->first;
    if (first != 0) {
        fn_038a42c4(first, (s32)*value);
    }
    void *second = ((Owner *)object)->second;
    if (second != 0) {
        fn_038b12d0(second, (s32)*value);
    }
}
