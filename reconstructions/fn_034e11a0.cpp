extern "C" void fn_034e1194(void*);

namespace {
struct Object {
    char padding_0[0x94];
    unsigned short flags;
};
}

extern "C" int fn_034e11a0(void* object)
{
    unsigned int flags = ((Object *) object)->flags;
    flags &= 1;
    if (flags) {
        fn_034e1194(object);
        return 2;
    }
    return 5;
}
