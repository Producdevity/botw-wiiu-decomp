extern "C" void fn_03c92f98(void*);
extern "C" int fn_03ca6e9c(void*);
extern "C" void fn_03cc77f4(void*);
extern "C" void fn_0434bda8(void*, void*);

namespace {
struct Owner {
    char padding_0[4];
    void* parent;
    char padding_8[0x28];
    char status;
    char padding_31[0xAB];
    void* extra;
};
}

extern "C" int fn_03cc7c98(void *object) {
    Owner *owner = (Owner*)object;
    int result = fn_03ca6e9c(&owner->status);
    if (result == 0) {
        void *extra = owner->extra;
        if (extra != 0) {
            fn_0434bda8(owner->parent, extra);
        }
        fn_03c92f98(object);
        fn_03cc77f4(object);
        result = 0;
    }
    return result;
}
