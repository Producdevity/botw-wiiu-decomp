namespace {
struct Object {
    unsigned char padding_0[0xE8];
    void* const* vtable;
};

typedef int (*Predicate)();
}

extern "C" unsigned char fn_02c1b300(void* object) {
    int result = 0;
    if (object != 0 && ((Predicate)((Object*)object)->vtable[253])() != 0) {
        result = 1;
    }
    return result;
}
