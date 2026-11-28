typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;

namespace {
struct Object {
    char padding_0[0x42C];
    u8 first;
    u8 second;
    u8 third;
};
}

extern "C" void fn_03ca2aac(void *object, u32 index, s32 value) {
    switch (index) {
    case 1:
        if (value != 0) {
            value = ((Object *)object)->first;
        }
        ((Object *)object)->first = (u8)value;
        return;
    case 2:
        if (value != 0) {
            value = ((Object *)object)->second;
        }
        ((Object *)object)->second = (u8)value;
        return;
    case 3:
        if (value != 0) {
            value = ((Object *)object)->third;
        }
        ((Object *)object)->third = (u8)value;
        return;
    }
}
