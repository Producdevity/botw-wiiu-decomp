extern "C" void fn_02b1c9b4(void*, void*);
extern "C" void fn_02b1cafc(void*, void*, void*);

namespace {
struct Object {
    char padding_0[0xA0];
    char field_a0;
};
}

extern "C" void fn_02b1cb98(void* object, void* context)
{
    fn_02b1c9b4(object, context);
    fn_02b1cafc(object, context, &((Object*)object)->field_a0);
}
