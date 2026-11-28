namespace {
struct Vtable {
    char padding_0[0x1C];
    int (*method_1c)(void *);
};

struct Object {
    char padding_0[0x8c];
    int value_8c;
    Vtable *vtable;
};
}

extern "C" void fn_021da62c(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100489f8;

extern "C" void fn_021da29c(void* self)
{
    long mode = 1;
    fn_021da62c(self);
    ((Object *)self)->vtable->method_1c(&((Object *)self)->value_8c);
    fn_037946f0(self, ((Object *)self)->value_8c, mode, 0, 0, data_100489f8);
}
