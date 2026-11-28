namespace {
struct Vtable {
    char padding_0[0x1C];
    int (*method_1c)(void *);
};

struct Object {
    char padding_0[0x60];
    int value_60;
    Vtable *vtable;
};
}

extern "C" void fn_02438238(void*);
extern "C" void fn_037946f0(void*, int, int, int, int, float);
extern "C" float data_100b542c;

extern "C" void fn_0243bbe4(void* self)
{
    long mode = 1;
    fn_02438238(self);
    ((Object *)self)->vtable->method_1c(&((Object *)self)->value_60);
    fn_037946f0(self, ((Object *)self)->value_60, mode, 0, 0, data_100b542c);
}
