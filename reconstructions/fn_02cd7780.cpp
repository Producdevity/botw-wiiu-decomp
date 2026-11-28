namespace {
typedef int (*Method)(void *);

struct Object {
    void *owner;
    char padding_4[8];
    void *const *vtable;
};
}

extern "C" void fn_02d6b514(void *);
extern "C" void fn_02d7a7d4(void*);

extern "C" void fn_02cd7780(void *object) {
    Object *view = (Object *) object;
    fn_02d7a7d4(view->owner);
    ((Method) view->vtable[65])(object);
    fn_02d6b514(view->owner);
}
