extern "C" float fn_02912eb4(void*);

namespace {
struct Object {
    char padding_0[0x20];
    float* limit;
};
}

extern "C" int fn_02912fac(void* object)
{
    int result = !(fn_02912eb4(object) > *((Object*)object)->limit);
    return result;
}
