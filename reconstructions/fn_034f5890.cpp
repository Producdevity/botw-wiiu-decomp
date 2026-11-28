extern "C" void fn_034f543c(void*, int);
extern "C" void fn_034f5478(void*);
extern "C" void fn_037d71ec(void*, int);

namespace {
struct Object {
    char padding_0[1];
    unsigned char flags;
    char padding_2[0x26];
    void *target;
};
}

extern "C" void fn_034f5890(void* object)
{
    fn_037d71ec(((Object *)object)->target, 0);
    fn_037d71ec(((Object *)object)->target, 1);
    unsigned int flags = ((Object *)object)->flags;
    flags &= ~1;
    ((Object *)object)->flags = flags;
    fn_034f543c(object, 1);
    fn_034f5478(object);
}
