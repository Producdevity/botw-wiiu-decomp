extern "C" void fn_02bd0a14(void*, void*, float);

namespace {
struct Object {
    char padding_0[0x6C];
    char field_6c[4];
    float value_70;
    char padding_74[4];
    float value_78;
    float value_7c;
};
}

extern "C" void fn_02bd0d34(void* object)
{
    fn_02bd0a14(object, ((Object*)object)->field_6c, ((Object*)object)->value_78);
    ((Object*)object)->value_70 = ((Object*)object)->value_70 + ((Object*)object)->value_7c;
}
