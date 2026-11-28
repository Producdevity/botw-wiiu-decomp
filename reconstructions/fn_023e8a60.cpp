namespace {
struct Vtable {
    char padding_0[0x1C];
    int (*method_1c)(void *);
};

struct Object {
    char padding_0[0x80];
    int value_80;
    Vtable *vtable;
};
}

extern "C" void fn_023e8e08(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100a6ac4;

extern "C" void fn_023e8a60(void* self)
{
    long mode = 1;
    fn_023e8e08(self);
    ((Object *)self)->vtable->method_1c(&((Object *)self)->value_80);
    fn_037946f0(self, ((Object *)self)->value_80, mode, 0, 0, data_100a6ac4);
}
