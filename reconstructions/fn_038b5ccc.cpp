extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);

namespace {
struct Base {
    char padding_0[0x54];
    void (*callback)(void *);
};
struct Object {
    char padding_0[0x3C];
    int value_3c;
    char padding_40[8];
    Base *base;
};
}

extern "C" void fn_038b5ccc(void* object)
{
    Base* base;
    fn_030bb668(object);
    base = ((Object *) object)->base;
    base->callback(object);
    ((Object *) object)->value_3c = 0;
    fn_030bb69c(object);
}
