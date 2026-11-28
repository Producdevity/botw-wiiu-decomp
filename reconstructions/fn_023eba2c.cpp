namespace {
struct Vtable {
    char padding_0[0x1C];
    int (*method_1c)(void *);
};

struct Object {
    char padding_0[0x6c];
    int value_6c;
    Vtable *vtable;
};
}

extern "C" void fn_023ea8b8(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100a728c;

extern "C" void fn_023eba2c(void* self)
{
    long mode = 1;
    fn_023ea8b8(self);
    ((Object *)self)->vtable->method_1c(&((Object *)self)->value_6c);
    fn_037946f0(self, ((Object *)self)->value_6c, mode, 0, 0, data_100a728c);
}
