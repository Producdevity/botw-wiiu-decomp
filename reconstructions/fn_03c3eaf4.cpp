typedef int s32;

namespace {
struct Source {
    char padding_0[0x1D0];
    unsigned char restart;
    char padding_1d1[3];
    s32 value_1d4;
    char padding_1d8[0x14];
    s32 value_1ec;
    s32 value_1f0;
    char padding_1f4[0x2A4];
    s32 value_498;
};

struct Target {
    char padding_0[4];
    s32 value_4;
    char padding_8[0x6C];
    s32 count;
    signed char flag;
    char padding_79[3];
    s32 value_7c;
    s32 value_80;
};
}

extern "C" void fn_03c3eaf4(void *object, void *target, s32 *value) {
    reinterpret_cast<Target *>(target)->value_4 = reinterpret_cast<Source *>(object)->value_1f0;
    reinterpret_cast<Target *>(target)->value_80 = reinterpret_cast<Source *>(object)->value_1ec;
    reinterpret_cast<Target *>(target)->value_7c = *value;
    if (reinterpret_cast<Source *>(object)->restart == 0) {
        reinterpret_cast<Target *>(target)->flag = 1;
        reinterpret_cast<Source *>(object)->value_498 = 0;
        return;
    }
    reinterpret_cast<Target *>(target)->count = reinterpret_cast<Target *>(target)->count + 1;
    reinterpret_cast<Source *>(object)->value_498 = reinterpret_cast<Source *>(object)->value_1d4;
}
