typedef unsigned int u32;

extern "C" void fn_039853b8(void*);
extern "C" void fn_039ab154(void*, void*);

namespace {
struct Object {
    unsigned char padding_0[0xB4];
    void *owner;
};
}

extern "C" void fn_03985468(void *object, u32 newOwner) {
    void *oldOwner;

    oldOwner = ((Object *)object)->owner;
    if ((oldOwner != 0) && (newOwner != (u32) oldOwner)) {
        fn_039ab154(oldOwner, object);
    }
    ((Object *)object)->owner = (void *) newOwner;
    fn_039853b8(object);
}
