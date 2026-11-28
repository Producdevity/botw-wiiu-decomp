extern "C" void fn_037dfba8(void*, int);
extern "C" int fn_037f59d8(void*);

namespace {
struct Object {
    char padding_0[8];
    unsigned flags;
    char padding_c[0x14 - 0xC];
    void *owner;
};
}

extern "C" void fn_037f89fc(void* self)
{
    int enabled = (((Object *) self)->flags >> 2) & 1;
    if (enabled) {
        void* owner = ((Object *) self)->owner;
        fn_037dfba8(owner, -fn_037f59d8(self));
        ((Object *) self)->flags &= 0xfffffffb;
    }
}
