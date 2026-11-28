extern "C" void fn_0258a598(void*);
extern "C" int fn_0339a0d0(void*);

namespace {
struct Object {
    void* owner;
    char padding_4[0x24];
    char* result;
};
}

extern "C" void fn_0258a1f0(void* object)
{
    
    *((Object*)object)->result = fn_0339a0d0(((Object*)object)->owner);
    fn_0258a598(object);
}
