extern "C" void fn_02b33e4c(void*);
extern "C" bool fn_0378dacc(void*, void*);
extern "C" void fn_0378da14(void* handle);

struct Opaque_Vtable_fn_0262a4f4 {
    unsigned char padding_0[28];
    void (*release)(void*);
};

struct Opaque_Owner_fn_0262a4f4 {
    Opaque_Vtable_fn_0262a4f4* vtable;
};

struct Opaque_fn_0262a4f4 {
    unsigned char padding_0[48];
    void* source;
    unsigned char padding_34[32];
    unsigned char slot[28];
    bool pending;
    unsigned char padding_71[3];
    Opaque_Vtable_fn_0262a4f4* owner;
};

extern "C" bool fn_0262a4f4(Opaque_fn_0262a4f4* object) {
    fn_02b33e4c(object->slot);
    if (fn_0378dacc(object->source, object->slot)) {
        return true;
    }
    bool result = false;
    object->pending = result;
    fn_0378da14(object->slot);
    object->owner->release(object->slot);
    return result;
}
