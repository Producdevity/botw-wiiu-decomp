namespace {
struct Object {
    unsigned char flags;
};
}

extern "C" void fn_0324d1ac(Object* object, bool enabled) {
    if (enabled)
        object->flags |= 0x2u;
    else
        object->flags &= 0xfdu;
}
