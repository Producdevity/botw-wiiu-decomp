typedef unsigned char u8;

extern "C" void fn_0378ac20(void*);
extern "C" void fn_0379033c(void*, void*);
extern "C" void fn_03790590(void*, void*);
extern "C" void* data_1047c244;

namespace {
struct Object {
    char padding_0[0x54];
    u8 state;
};
}

extern "C" void fn_0378b764(void *object) {
    if (((Object *) object)->state != 3) {
        fn_03790590(data_1047c244, object);
        fn_0379033c(data_1047c244, object);
        fn_0378ac20(object);
    }
}
