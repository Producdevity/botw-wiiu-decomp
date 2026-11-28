extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" void* fn_0312534c(void*);
extern "C" const unsigned char data_1012602c;

namespace {
struct Object {
    char padding_0[0xC];
    const void *vtable;
    char padding_10[0x10];
    char member_20[1];
};
}

extern "C" void* fn_0275c9fc(void* storage, const void* source) {
    if (storage == 0) {
        storage = fn_0308e578(0x90);
        if (storage == 0) {
            return storage;
        }
    }
    fn_037b7cf0(storage, source);
    ((Object *)storage)->vtable = &data_1012602c;
    fn_0312534c(((Object *)storage)->member_20);
    return storage;
}
