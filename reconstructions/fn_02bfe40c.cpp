extern "C" const float data_101bdfbc;

namespace {
typedef float (*FloatGetter)(void *);

struct Object {
    char padding_0[0xC];
    FloatGetter *vtable;
};
}

extern "C" bool fn_02bfe40c(void *object) {
    void *receiver;
    int slot;
    FloatGetter *vtable = ((Object *) object)->vtable;
    slot = 0x17C / sizeof(FloatGetter);
    receiver = object;
    return vtable[slot](receiver) == data_101bdfbc;
}
