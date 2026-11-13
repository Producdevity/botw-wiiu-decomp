namespace {
struct Object {
    unsigned char flags;
};
}

extern "C" void fn_0324d23c(Object* object, bool enabled) {
    if (enabled)
        object->flags |= 0x10u;
    else
        object->flags &= 0xefu;
}
