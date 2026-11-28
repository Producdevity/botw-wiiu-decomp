extern "C" int fn_0328e9f0(void *);
extern "C" void fn_033a18f0(void *, void *);

namespace {
struct Object {
    char padding_0[0xB8];
    int value_b8;
    int value_bc;
};
}

extern "C" void fn_0328eb88(void *object)
{
    ((Object *)object)->value_b8 = 0;
    if (fn_0328e9f0(object) != 0) {
        fn_033a18f0(&((Object *)object)->value_b8, &((Object *)object)->value_bc);
    }
}
