extern "C" void fn_03195b04(void*);
extern "C" void fn_03197e04(void*, int);
extern "C" void fn_03197ee4(void*, int);
extern "C" void fn_03197fb8(void*, int);
extern "C" void fn_03198230(void*, int);
struct Opaque_Table_fn_02b06b7c { unsigned char padding_0[780]; void* (*acquire)(void*); };
struct Opaque_Owner_fn_02b06b7c { unsigned char padding_0[232]; Opaque_Table_fn_02b06b7c* table; };
struct Opaque_fn_02b06b7c { unsigned char padding_0[4]; Opaque_Owner_fn_02b06b7c* owner; };
extern "C" void fn_02b06b7c(Opaque_fn_02b06b7c* object, int enable) {
    Opaque_Owner_fn_02b06b7c* owner = object->owner;
    void* found = owner->table->acquire(owner);
    void* middle = found;
    void* target = middle;
    if (target != 0) {
        if (enable) fn_03195b04(target);
        fn_03197e04(target, enable);
        fn_03197ee4(target, enable);
        fn_03197fb8(target, enable);
        fn_03198230(target, enable);
    }
}
