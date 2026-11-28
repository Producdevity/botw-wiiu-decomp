extern "C" void fn_02868b0c(void *);
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" int data_101496b4;

namespace {
struct Object {
    char padding_0[0x21];
    char flag_21;
};
}

extern "C" void fn_02868ca8(void *self)
{
    Object *object = (Object *)self;
    object->flag_21 = 0;
    fn_02868b0c(self);
    fn_037b8284(self, &data_101496b4, 0);
}
