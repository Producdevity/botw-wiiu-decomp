extern "C" float fn_02e90bfc(void *);
extern "C" void fn_02e90c30(void *, float);
extern "C" float fn_02ea6a4c(int);
extern "C" void fn_02ea6a8c(void *, void *);

namespace {
struct Inner {
    char padding_0[0x648];
    char member_648[1];
};

struct Object {
    char padding_0[0x478];
    Inner *inner_478;
};
}

extern "C" void fn_02f03e78(void *self, int value)
{
    Object *object = (Object *)self;
    fn_02e90bfc(object->inner_478->member_648);
    fn_02e90c30(object->inner_478->member_648, fn_02ea6a4c(value));
    fn_02ea6a8c(object->inner_478, (void *)value);
}
