namespace {
struct Inner {
    char padding_0[0x5C];
    int flags;
};
struct Handle {
    char padding_0[0x6C];
    Inner* inner;
};
struct Object {
    char padding_0[0xE8];
    void* const* vtable;
    char padding_ec[0x7F4];
    unsigned int state;
};
}

extern "C" int fn_02d33c5c(void* object) {
    Object* self = (Object*)object;
    Inner* inner;

    if ((self->state >> 0x17U) & 1) {
        inner = ((Handle*)((void* (*)())self->vtable[529])())->inner;
        if (inner != 0) {
            return inner->flags & 1;
        }
    }
    return 0;
}
