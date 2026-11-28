typedef unsigned char u8;

extern "C" void fn_029fcb58(void*, void*);

extern "C" void *data_10463578;

namespace {
struct Object {
    void *owner;
    char padding_4[0x20];
    u8 registered;
};
}

extern "C" void fn_020b4398(void *object) {
    if (((Object *) object)->registered != 0) {
        if (data_10463578 != 0) {
            fn_029fcb58(data_10463578, ((Object *) object)->owner);
        }
        ((Object *) object)->registered = 0;
    }
}
