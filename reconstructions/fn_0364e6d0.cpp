namespace {
struct Object {
    char padding_0[0xC];
    int *vtable;
};
}

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03670f78(void*, void*);

extern "C" int data_10300918;

extern "C" void fn_0364e6d0(void *object, int flags) {
    if (object != 0) {
        ((Object *) object)->vtable = &data_10300918;
        fn_03670f78(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
