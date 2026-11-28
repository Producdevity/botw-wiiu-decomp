namespace {
struct Object {
    void *owner;
    char padding_4[0x18];
    signed char flag;
};
}

extern "C" bool fn_029534d8(void*, int, int, int, int);
extern "C" void fn_029d3cdc(void*);

extern "C" void fn_029d3cf4(void *object) {
    Object *view = (Object *) object;
    view->flag = 0;
    if (fn_029534d8(view->owner, 0, 0, 0, 0) != 0) {
        fn_029d3cdc(object);
    }
}
