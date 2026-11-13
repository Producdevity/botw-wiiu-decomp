namespace {
struct Object {
    unsigned char flags;
};
}

extern "C" void fn_0324d20c(Object* object, bool enabled) {
    if (enabled)
        object->flags |= 0x8u;
    else
        object->flags &= 0xf7u;
}
