extern "C" unsigned int fn_02d82148(const void *);
extern "C" void fn_030ea2cc(void *);

namespace {
struct Object {
    void *owner;
    char padding_4[8];
    char *table_c;
};
}

extern "C" void fn_02c94694(void *self)
{
    Object *object = (Object *)self;
    void (*callback)(void *) = *(void (**)(void *))(object->table_c + 0x104);
    callback(self);
    if (fn_02d82148(object->owner) != 0) {
        fn_030ea2cc(self);
    }
}
