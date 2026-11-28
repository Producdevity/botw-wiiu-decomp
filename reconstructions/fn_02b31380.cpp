typedef unsigned char u8;

extern "C" void fn_02b30fbc(void*, void*);
extern "C" void fn_02b31208(void*);

namespace {
struct Object {
    char padding_0[0x30];
    u8 initialised;
    char padding_31[0x1F];
    u8 value;
};
}

extern "C" void fn_02b31380(void *object, u8 value) {
    if (((Object *) object)->initialised == 0 || ((Object *) object)->value != value) {
        ((Object *) object)->value = value;
        ((Object *) object)->initialised = 1;
        fn_02b30fbc(object, (void *) value);
        fn_02b31208(object);
    }
}
