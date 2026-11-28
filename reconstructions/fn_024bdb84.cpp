extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_024bdefc(void* storage, const void* source);
extern "C" void* fn_0312534c(void*);
extern "C" const unsigned char data_100c6ab8;

namespace {
struct Object {
    char padding_0[0xC];
    const void *vtable;
    char padding_10[0x74];
    char member_84[1];
};
}

extern "C" void* fn_024bdb84(void* storage, const void* source) {
    if (storage == 0) {
        storage = fn_0308e578(0xF4);
        if (storage == 0) {
            return storage;
        }
    }
    fn_024bdefc(storage, source);
    ((Object *)storage)->vtable = &data_100c6ab8;
    fn_0312534c(((Object *)storage)->member_84);
    return storage;
}
