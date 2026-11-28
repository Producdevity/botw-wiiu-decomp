namespace {
struct Object {
    char padding_0[4];
    void *member;
    int *vtable;
};
}

extern "C" void fn_0308e6d0(void *);

extern "C" int data_10372740;

extern "C" void fn_03b2458c(void *object, int flags) {
    Object *view = (Object *) object;
    if (object != 0) {
        view->vtable = &data_10372740;
        fn_0308e6d0(view->member);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
