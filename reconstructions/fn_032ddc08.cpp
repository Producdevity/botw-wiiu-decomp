extern "C" void fn_0330556c(void* entry);
extern "C" void fn_0379884c(void* owner, void* data);

namespace {
struct Vtable {
    char padding_0[0x414];
    void *(*getEntry_414)(void *);
};

struct Owner {
    char padding_0[0xE8];
    Vtable *vtable_e8;
};

struct ObjectVtable {
    char padding_0[0x11C];
    int (*predicate_11c)(void *);
};

struct Object {
    void *owner_0;
    char padding_4[8];
    ObjectVtable *vtable_c;
    char padding_10[0x10];
    char member_20[1];
};
}

extern "C" void fn_032ddc08(void* object) {
    void* owner = static_cast<Object *>(object)->owner_0;
    void* entry = static_cast<Owner *>(owner)->vtable_e8->getEntry_414(owner);
    if (entry != 0) {
        fn_0330556c(entry);
    }
    if (static_cast<Object *>(object)->vtable_c->predicate_11c(object) != 0) {
        fn_0379884c(owner, static_cast<Object *>(object)->member_20);
    }
}
