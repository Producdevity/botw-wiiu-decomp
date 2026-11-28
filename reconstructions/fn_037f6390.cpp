extern "C" void fn_037dfb98(void*, int);
extern "C" int fn_037f59d8(void*);

namespace {
struct Object {
    char padding_0[8];
    unsigned flags;
    char padding_c[0x14 - 0xC];
    void *owner;
};
}

extern "C" void fn_037f6390(void* self)
{
    int enabled = (((Object *) self)->flags >> 1) & 1;
    if (enabled) {
        void* owner = ((Object *) self)->owner;
        fn_037dfb98(owner, -fn_037f59d8(self));
        ((Object *) self)->flags &= 0xfffffffd;
    }
}
