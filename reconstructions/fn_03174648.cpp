typedef int s32;
typedef unsigned int u32;

extern "C" unsigned fn_0317097c(const unsigned *);

namespace {
struct Owner {
    unsigned char padding_0[0x6B0];
    s32 (*callback)();
};
}

extern "C" s32 fn_03174648(void *owner, u32 *arg) {
    s32 (*callback)();
    s32 result;

    callback = ((Owner *)owner)->callback;
    result = 0;
    if (callback != 0) {
        fn_0317097c(arg);
        result = callback();
    }
    return result;
}
