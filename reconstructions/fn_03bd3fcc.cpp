extern "C" void fn_030bb668(void *);
extern "C" void fn_030bb69c(void *);

namespace {
struct Object {
    char padding_0[0xC];
    int value_c;
    int value_10;
    char padding_14[0x38];
    char lock_4c[1];
};
}

extern "C" void fn_03bd3fcc(void *object)
{
    Object *view = (Object *)object;
    void *lock = view->lock_4c;
    fn_030bb668(lock);
    view->value_c = 0;
    view->value_10 = 0;
    fn_030bb69c(lock);
}
