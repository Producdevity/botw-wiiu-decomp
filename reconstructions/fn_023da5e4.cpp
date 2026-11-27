namespace {
struct Owner {
    unsigned char padding_0[0x364];
    unsigned int flags;
};

struct Object {
    Owner *owner;
    unsigned char padding_4[0x3D];
    unsigned char active;
};
}

extern "C" void fn_023da5e4(void *arg0) {
    Object *object = static_cast<Object *>(arg0);
    if (object->active != 0) {
        object->owner->flags &= ~0x20u;
    }
}
