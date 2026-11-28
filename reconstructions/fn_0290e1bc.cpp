extern "C" void fn_025e754c(void*, void*);
extern "C" void fn_02b5f6a8(void*, void*, int, void*, void*, void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x12C];
    char field_130;
};
}

extern "C" void fn_0290e1bc(void** object, void* context)
{
    fn_02b5f6a8(((Object*)object)->owner, &((Object*)object)->field_130, 1, 0, 0, 0);
    fn_025e754c(object, context);
}
