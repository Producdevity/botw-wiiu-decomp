namespace {
struct Child {
    unsigned char padding_0[24];
    int flags;
};

struct Owner {
    void* first;
    unsigned char padding_4[16];
    Child* child;
};

inline unsigned char is_clear(const Child* child) {
    return (child->flags & 1) ^ 1;
}
}

extern "C" void fn_02a0cc4c(void*, void*);

extern "C" int fn_022a8320(void* object) {
    Owner* owner = (Owner*) object;
    if (owner->child != 0 && is_clear(owner->child)) {
        fn_02a0cc4c(owner->child, ((Owner*) object)->first);
    }
    return 1;
}
