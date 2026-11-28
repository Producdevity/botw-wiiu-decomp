extern "C" void fn_03bf8bd0(void *, void *);

namespace {
struct Object {
    char padding_0[4];
    char member_4[4];
    int flags_8;
    char padding_c[0x74];
    int value_80;
};
}

extern "C" void fn_039e2044(void *self, void *argument)
{
    int flags = ((Object *)self)->flags_8;
    if (flags & 1) {
        fn_03bf8bd0(((Object *)self)->member_4, argument);
    }
    int *field = &((Object *)self)->value_80;
    *field = 0;
}
