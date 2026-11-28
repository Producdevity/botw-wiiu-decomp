extern "C" void fn_02b1a87c(void *);

namespace {
struct Object {
    unsigned char padding_0[0xE8];
    void *const *vtable;
    unsigned char padding_EC[0xA28];
    void *resource;
};
}

extern "C" void fn_024adf38(void *object) {
    void *resource;

    if (static_cast<Object *>(object)->resource != 0 && reinterpret_cast<int (*)(void *)>(static_cast<Object *>(object)->vtable[301])(object) == 0) {
        resource = static_cast<Object *>(object)->resource;
        if (resource != 0) {
            fn_02b1a87c(resource);
        }
    }
}
