typedef int s32;

extern "C" int fn_0317780c(void*);

namespace {
struct Object {
    unsigned char padding_0[0x84];
    unsigned char first[0x88];
    unsigned char second[1];
};
}

extern "C" s32 fn_02733c98(s32 arg0) {
    Object *self = (Object *)arg0;
    s32 first_ok = fn_0317780c(self->first) & 1;
    return first_ok & fn_0317780c(self->second);
}
