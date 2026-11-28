namespace {
struct VTable {
    char padding_0[0x5C];
    unsigned int (*getFlags)();
};

struct Object {
    char padding_0[0xC];
    VTable* vtable;
};
}

extern "C" int fn_03b8f65c(void* object) {
    return (static_cast<Object*>(object)->vtable->getFlags() >> 2) & 1;
}
