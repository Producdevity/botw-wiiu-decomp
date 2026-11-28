extern "C" void fn_02344990(void *);

namespace {
typedef int (*Method)(void*);

struct Object {
    char padding_0[0x24];
    char field_24;
    char padding_25[7];
    Method* vtable;
};
}

extern "C" void fn_022a1fd4(void* object)
{
    Object* self = (Object*)object;
    self->vtable[21](&self->field_24);
    fn_02344990(object);
}
