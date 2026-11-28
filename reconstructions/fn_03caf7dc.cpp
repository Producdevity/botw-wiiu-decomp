extern "C" void fn_03cb76a4(void*);
extern "C" void* fn_0434d1d8(void *, int, unsigned int);

namespace {
struct Object {
    char padding_0[0x48];
    int value_48;
    char block_4c[4];
    signed char flag_50;
    signed char flag_51;
    signed char flag_52;
};
}

extern "C" void fn_03caf7dc(void *object) {
    fn_03cb76a4(object);
    fn_0434d1d8(((Object *)object)->block_4c, 0, 4U);
    ((Object *)object)->flag_50 = 0;
    ((Object *)object)->flag_52 = 0;
    ((Object *)object)->flag_51 = 0;
    ((Object *)object)->value_48 = 0;
}
