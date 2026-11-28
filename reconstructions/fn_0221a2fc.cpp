namespace {
struct Object {
    void *owner;
    char padding_4[7];
    unsigned char flags;
};
}

extern "C" int fn_030ea2f4(void*);
extern "C" void fn_0339a0c4(void *);

extern "C" void fn_0221a2fc(void *object) {
    Object *view = (Object *) object;
    if (fn_030ea2f4(object) != 0) {
        fn_0339a0c4(view->owner);
    }
    view->flags |= 4;
}
