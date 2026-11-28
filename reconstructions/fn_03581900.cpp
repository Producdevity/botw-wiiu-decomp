typedef unsigned char u8;
typedef unsigned short u16;
typedef int s32;

extern "C" void fn_03581858(void*);

namespace {
struct Object {
    unsigned char padding_0[0x40];
    u8 active;
    unsigned char padding_41[0x27D9];
    u16 counter;
};
}

extern "C" void fn_03581900(void *object) {
    u16 counter;

    if (((Object *)object)->active != 0) {
        fn_03581858(object);
        counter = ((Object *)object)->counter;
        if (counter != 0) {
            ((Object *)object)->counter = counter - 1;
        }
    }
}
