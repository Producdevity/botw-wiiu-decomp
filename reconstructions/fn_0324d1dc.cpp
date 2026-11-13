namespace {
struct Object {
    unsigned char flags;
};
}

extern "C" void fn_0324d1dc(Object* object, bool enabled) {
    if (enabled)
        object->flags |= 0x4u;
    else
        object->flags &= 0xfbu;
}
