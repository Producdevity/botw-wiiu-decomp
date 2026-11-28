extern "C" void fn_03bc2170(void*, void*);

namespace {
struct Owner {
    unsigned char padding_0[0xCC];
    void *child;
};
}

extern "C" void fn_03bac234(void *self) {
    void *child = static_cast<Owner *>(self)->child;
    if (child != 0) {
        fn_03bc2170(child, self);
        static_cast<Owner *>(self)->child = 0;
    }
}
