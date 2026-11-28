extern "C" void* fn_02c0378c(void* holder);
extern "C" void fn_02c097f4(void);

namespace {
struct VTable {
    void *padding_0[87];
    int (*callback)(void *);
};

struct Object {
    char padding_0[0xC];
    VTable *vtable;
    char holder[1];
};
}

extern "C" void fn_02ba8c70(void *object, void *unused) {
    VTable *vtable;
    if (fn_02c0378c(((Object *) object)->holder) != 0) {
        fn_02c097f4();
    }
    (vtable = ((Object *) object)->vtable)->callback(object);
}
