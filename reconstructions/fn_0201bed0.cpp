extern "C" int fn_02b0bd8c(void*);

namespace {
struct Object {
    char padding_0[0x550];
    void *target;
    char padding_554[0x4B8];
    unsigned int flags;
};
}

extern "C" int fn_0201bed0(void* self)
{
    unsigned int flags = ((Object *) self)->flags >> 0x15;
    if ((flags & 1) != 0) {
        return 1;
    }
    void* target = ((Object *) self)->target;
    if (target != 0 && fn_02b0bd8c(target) != 0) {
        return 1;
    }
    return 0;
}
