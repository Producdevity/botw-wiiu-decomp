typedef unsigned char u8;
typedef int s32;

extern "C" void fn_03c1597c(void*);

namespace {
struct Object {
    unsigned char padding_0[0x314];
    unsigned char member_314;
    unsigned char padding_315[0x90];
    u8 state_3a5;
    unsigned char padding_3a6[2];
    s32 counter_3a8;
};
}

extern "C" void fn_03c16854(void *object) {
    if (((Object *)object)->state_3a5 == 1) {
        if (((Object *)object)->counter_3a8 == 1) {
            fn_03c1597c(&((Object *)object)->member_314);
        }
        if (((Object *)object)->counter_3a8 != 0) {
            ((Object *)object)->counter_3a8 = ((Object *)object)->counter_3a8 - 1;
        }
    }
}
