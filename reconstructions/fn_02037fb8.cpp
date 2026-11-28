extern "C" void fn_020372e8(void*, void*);
extern "C" void fn_02af63ec(void*, void*);

namespace {
struct Object {
    char padding_0[0xE8C];
    char sub_object;
};
}

extern "C" void fn_02037fb8(void* object, void* context)
{
    fn_02af63ec(object, context);
    fn_020372e8(&((Object*)object)->sub_object, context);
}
