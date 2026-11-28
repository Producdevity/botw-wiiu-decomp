extern "C" void fn_037924b4(void*, float);
extern "C" int fn_0379253c(void*, float);

extern "C" float data_1000a720;

namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_c[0x30];
    char block_3c[1];
};
}

extern "C" void fn_02067530(void *object, float value) {
    fn_037924b4(((Object *)object)->block_3c, value);
    if (fn_0379253c(((Object *)object)->block_3c, data_1000a720) != 0) {
        ((Object *)object)->flags |= 4;
    }
}
