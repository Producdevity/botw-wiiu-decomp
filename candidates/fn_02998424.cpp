namespace {
struct FlagsView { unsigned char reserved[4116]; unsigned short flags; };
struct ObjectView {
    unsigned char reserved0[60];
    FlagsView* flags;
    unsigned char reserved1[164];
    unsigned char ready;
    unsigned char reserved2[55];
    unsigned state;
};
}

extern "C" bool fn_02998424(void* context) {
    const ObjectView* object = static_cast<const ObjectView*>(context);
    if ((object->flags->flags & 0x10u) != 0)
        return true;
    if (object->ready != 0)
        return true;
    if (object->state == 12 || object->state == 6)
        return true;
    return false;
}
