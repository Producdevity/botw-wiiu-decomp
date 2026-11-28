extern "C" void fn_02037438(void*, void*);
extern "C" void fn_0379c0c0(void*, void*);

namespace {
struct Object {
    char padding_0[0xE8C];
    char sub_object;
};
}

extern "C" void fn_02037ffc(void* object, void* context)
{
    fn_0379c0c0(object, context);
    fn_02037438(&((Object*)object)->sub_object, context);
}
