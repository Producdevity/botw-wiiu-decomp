namespace {
struct Object {
    void *owner;
    char padding_4[0x90];
    char member_94[0x3C];
    int value_d0;
};
}

extern "C" void fn_020fcabc(void*);
extern "C" void fn_0294f720(void *, int, void *);

extern "C" void fn_020fadcc(void *object) {
    Object *view = (Object *)object;
    fn_020fcabc(object);
    view->value_d0 = -1;
    fn_0294f720(view->owner, 4, view->member_94);
}
