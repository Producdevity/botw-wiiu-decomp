typedef unsigned char u8;
typedef int s32;

extern "C" int fn_03677224(void*);

extern "C" void *data_1047be88;

namespace {
struct Flags {
    char padding_0[6];
    u8 bits;
};
struct Owner {
    char padding_0[0x444];
    Flags *flags;
};
}

extern "C" s32 fn_022c5b38(void **arg0) {
    s32 result = 1;

    if (!(((Owner *)*arg0)->flags->bits & 6) && fn_03677224(data_1047be88) == 0) {
        result = 0;
    }
    return result == 0;
}
