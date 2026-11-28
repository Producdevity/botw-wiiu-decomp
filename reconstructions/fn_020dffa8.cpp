extern "C" void fn_020dfebc(void *);
extern "C" void fn_020dff88(void *);

namespace {
struct Object {
    char padding_0[0x5C];
    char flag_5c;
};
}

extern "C" int fn_020dffa8(void *self)
{
    Object *object = (Object *)self;
    fn_020dfebc(self);
    object->flag_5c = 1;
    fn_020dff88(self);
    return 1;
}
