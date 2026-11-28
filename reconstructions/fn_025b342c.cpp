struct Opaque_025afff4;

extern "C" bool fn_025afff4(Opaque_025afff4* self, void* context);
extern "C" void fn_02603858(void*, void*);

namespace {
struct Object {
    char padding_0[0x50];
    char field_50;
};
}

extern "C" void fn_025b342c(void* object, void* context)
{
    fn_025afff4((Opaque_025afff4*)&((Object*)object)->field_50, context);
    fn_02603858(object, context);
}
