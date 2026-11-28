extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);
extern "C" void fn_034588ec(void*);

namespace {
struct Object {
    char padding_0[0x26];
    unsigned short flags;
    char block_28[1];
};
}

extern "C" void fn_03458e10(void* object)
{
    fn_030bb668(((Object *)object)->block_28);
    unsigned int flags = ((Object *)object)->flags;
    if ((flags >> 1) & 1) {
        fn_034588ec(object);
    }
    fn_030bb69c(((Object *)object)->block_28);
}
