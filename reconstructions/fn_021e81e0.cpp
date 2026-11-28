extern "C" void fn_037924b4(void*, float);
extern "C" int fn_0379253c(void*, float);

extern "C" float data_1004c328;

namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_c[0x1C];
    char block_28[1];
};
}

extern "C" void fn_021e81e0(void *object, float value) {
    fn_037924b4(((Object *)object)->block_28, value);
    if (fn_0379253c(((Object *)object)->block_28, data_1004c328) != 0) {
        ((Object *)object)->flags |= 4;
    }
}
