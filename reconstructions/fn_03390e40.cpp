typedef unsigned char u8;
typedef int s32;

extern "C" void fn_037e5f68(void *);
extern "C" void fn_037fbc1c(void*);

namespace {
struct Manager {
    unsigned char padding_0[0x349];
    u8 flag;
};
}

extern "C" void *data_1047b3fc;

extern "C" void fn_03390e40(s32 base) {
    if (((Manager *)data_1047b3fc)->flag == 0) {
        fn_037fbc1c(0);
        fn_037e5f68((void *)(base + 0xD0));
    }
}
