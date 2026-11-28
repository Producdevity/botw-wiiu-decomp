namespace {
struct Owner {
    char padding_0[0x364];
    int flags;
};
}

extern "C" int fn_023a6fbc(void **object) {
    Owner *owner = static_cast<Owner *>(*object);
    if (owner != 0) {
        owner->flags |= 8;
    }
    return 0;
}
