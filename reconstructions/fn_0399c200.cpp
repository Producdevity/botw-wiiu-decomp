extern "C" void fn_030c078c(void*, void*, void*);
extern "C" void fn_030c44cc(void*, void*, void*);

namespace {
struct Object {
    unsigned char padding_0[0x1B0];
    void *first;
    void *second;
};
}

extern "C" void fn_0399c200(void *arg0, void *arg1, void *arg2) {
    void *first = ((Object *)arg0)->first;
    if (first != 0) {
        fn_030c078c(first, arg1, arg2);
        fn_030c44cc(((Object *)arg0)->second, arg1, ((Object *)arg0)->first);
    }
}
