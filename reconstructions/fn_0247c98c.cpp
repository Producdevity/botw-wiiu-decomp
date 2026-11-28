typedef unsigned int u32;

extern "C" void* fn_02c1974c(void *, int);
extern "C" void* fn_037b4dd0(void);

namespace {
struct Owner {
    char padding_0[0x488];
    void *fallback;
};

struct Object {
    char padding_0[8];
    Owner *owner;
    char padding_c[0x34];
    u32 kind;
};
}

extern "C" void *fn_0247c98c(void *object) {
    void *result;

    switch (((Object *)object)->kind) {
    case 0:
        result = fn_02c1974c(((Object *)object)->owner, 0);
        if (result != 0) {
            return (char *)result + 0xB0;
        }
        return fn_037b4dd0();
    case 2:
        result = ((Object *)object)->owner->fallback;
        if (result == 0) {
            result = fn_037b4dd0();
        }
        return result;
    default:
        return fn_037b4dd0();
    }
}
