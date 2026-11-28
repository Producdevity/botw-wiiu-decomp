typedef int s32;
typedef unsigned int u32;

extern "C" void fn_0386d1a8(void *, unsigned);

namespace {
struct Values {
    u32 first;
    u32 second;
};
}

extern "C" s32 fn_03191aec(s32 base, void *values) {
    fn_0386d1a8((void *) (base + 0x14), ((Values *) values)->first);
    fn_0386d1a8((void *) (base + 0xE8), ((Values *) values)->second);
    return 1;
}
