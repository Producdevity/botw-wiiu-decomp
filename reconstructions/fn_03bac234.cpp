extern "C" void fn_03bc2170(void*, void*);

namespace {
struct Owner {
    unsigned char padding_0[0xCC];
    void *child;
};
}

extern "C" void fn_03bac234(void *arg0) {
    void *child = ((Owner *)arg0)->child;
    if (child != 0) {
        fn_03bc2170(child, arg0);
        ((Owner *)arg0)->child = 0;
    }
}
