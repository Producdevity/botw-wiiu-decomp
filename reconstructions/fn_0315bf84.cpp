extern "C" void fn_030ffc88(void*, void*, void*);
extern "C" int fn_0315bea4(void*, void*);

namespace {
struct Object {
    char padding_0[0xA4];
    char field_a4;
};
}

extern "C" void fn_0315bf84(void* object, void* context)
{
    fn_030ffc88(context, (void*)fn_0315bea4(object, context), &((Object*)object)->field_a4);
}
