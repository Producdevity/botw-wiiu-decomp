extern "C" void fn_033053bc(void* entry, void* value);
extern "C" void fn_030ea2cc(void* object);

namespace {
struct VTable {
    char padding_0[0x414];
    void *(*get_entry)(void *);
};
struct Owner {
    char padding_0[0xE8];
    VTable *vtable;
};
struct Object {
    Owner *owner;
    char padding_4[0xC];
    void *value;
};
}

extern "C" void fn_032d5da0(void* object) {
    Owner *owner = ((Object *) object)->owner;
    void* entry = owner->vtable->get_entry(owner);
    if (entry != 0) {
        fn_033053bc(entry, ((Object *) object)->value);
    }
    fn_030ea2cc(object);
}
