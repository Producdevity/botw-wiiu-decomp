extern "C" void* fn_0308e578(unsigned size);
extern "C" int fn_037e5ec0(void*);

namespace {
struct Object {
    char padding_0[0x10];
    int value_10;
    int value_14;
    char member[1];
};
}

extern "C" void* fn_032c2b04(void* self)
{
    if (self != 0 || (self = fn_0308e578(0x48)) != 0) {
        ((Object *) self)->value_10 = 0;
        ((Object *) self)->value_14 = 0;
        fn_037e5ec0(((Object *) self)->member);
    }
    return self;
}
