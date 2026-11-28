namespace {
struct Vtable {
    char padding_0[0x1C];
    int (*method_1c)(void *);
};

struct Object {
    char padding_0[0x54];
    int value_54;
    Vtable *vtable;
};
}

extern "C" void fn_023e93c0(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100a6f50;

extern "C" void fn_023ea504(void* self)
{
    long mode = 1;
    fn_023e93c0(self);
    ((Object *)self)->vtable->method_1c(&((Object *)self)->value_54);
    fn_037946f0(self, ((Object *)self)->value_54, mode, 0, 0, data_100a6f50);
}
