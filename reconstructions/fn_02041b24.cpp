typedef int s32;
typedef unsigned int u32;

extern "C" char* fn_0204151c(void *);

namespace {
struct Data {
    char padding_0[0x3C];
    u32 mode;
};
}

extern "C" s32 fn_02041b24(void *object) {
    u32 mode;

    mode = ((Data *)fn_0204151c(object))->mode;
    switch (mode) {
    case 1:
        return 6;
    case 2:
        return 3;
    default:
        return 0;
    }
}
