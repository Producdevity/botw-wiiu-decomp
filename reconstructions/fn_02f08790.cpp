extern "C" void fn_02f086d0(void*, void*);
extern "C" void fn_02f0a74c(void*, void*);

namespace {
struct Context {
    char padding_0[8];
    void* field_8;
};

struct Object {
    char padding_0[0xD4];
    char field_d4;
};
}

extern "C" void fn_02f08790(void* object, void* context)
{
    fn_02f086d0(object, ((Context*)context)->field_8);
    fn_02f0a74c(&((Object*)object)->field_d4, context);
}
