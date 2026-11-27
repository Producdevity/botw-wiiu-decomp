typedef unsigned char u8;
typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0x24];
    u8 *enabled;
    unsigned char padding_28[0x20];
    s32 *counter;
    unsigned char padding_4c[0x10];
    s32 state;
    u8 counted;
};
}

extern "C" void fn_029bcac0(void *object_ptr) {
    if ((*((Object *)object_ptr)->enabled != 0) && (((Object *)object_ptr)->state >= 2)) {
        ((Object *)object_ptr)->state = 5;
    }
    if ((((Object *)object_ptr)->counted != 0) && (((Object *)object_ptr)->state <= 4)) {
        *((Object *)object_ptr)->counter -= 1;
        ((Object *)object_ptr)->counted = 0;
    }
}
