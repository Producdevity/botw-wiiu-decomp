namespace {
struct Object {
    char padding_0[0x4C];
    int count;
    int offset;
};
}

struct ListLink;
extern "C" void fn_0308e808(ListLink *);
extern "C" void fn_03bcb110(void*);

extern "C" void fn_03bcc098(void *object, int base) {
    Object *view = (Object *) object;
    fn_0308e808((ListLink *) (base + view->offset));
    view->count--;
    fn_03bcb110(object);
}
