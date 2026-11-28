namespace {
typedef int (*Method)(void *);

struct Object {
    int id;
    char padding_4[8];
    void *const *vtable;
};
}

extern "C" void fn_028dab84(void*);
extern "C" void fn_02b50a38(unsigned char, int);

extern "C" void fn_0281b2dc(void *object) {
    Object *view = (Object *) object;
    fn_028dab84(object);
    if (((Method) view->vtable[11])(object) == 0) {
        fn_02b50a38(0U, view->id);
    }
}
