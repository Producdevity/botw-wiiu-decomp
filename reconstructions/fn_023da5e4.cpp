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

extern "C" void fn_023da5e4(void *object) {
    Object *self = static_cast<Object *>(object);
    if (self->active != 0) {
        self->owner->flags &= ~0x20u;
    }
}
