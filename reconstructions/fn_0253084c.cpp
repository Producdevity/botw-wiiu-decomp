typedef signed char s8;
typedef int s32;

extern "C" void fn_025306a0(void*);
extern "C" void fn_037b8284(void *, const void *, void *);

extern "C" s32 data_100d7608;

namespace {
struct Object {
    char padding_0[0xD8];
    s8 flag;
};
}

extern "C" void fn_0253084c(void *object) {
    fn_025306a0(object);
    ((Object *) object)->flag = 0;
    fn_037b8284(object, &data_100d7608, 0);
}
