typedef signed char s8;
typedef int s32;
extern "C" void fn_037b8284(void *, const void *, void *);
extern "C" s32 data_100fd0d4;

namespace {
struct Object {
    char padding_0[0x24];
    s8 *flag;
};
}

extern "C" void fn_0263a2d0(void *object) {
    fn_037b8284(object, &data_100fd0d4, 0);
    *((Object *) object)->flag = 1;
}
