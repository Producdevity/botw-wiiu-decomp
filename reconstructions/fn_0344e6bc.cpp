extern "C" void fn_0344e6a0(void *, void *);
extern "C" void fn_03c6fe90(void *, void *, void *);

namespace {
struct Object {
    char padding_0[0x70];
    char field_70;
};
}

extern "C" void fn_0344e6bc(void* object, void* other)
{
    fn_0344e6a0(object, other);
    void* field = &((Object*)object)->field_70;
    fn_03c6fe90(other, field, other);
}
