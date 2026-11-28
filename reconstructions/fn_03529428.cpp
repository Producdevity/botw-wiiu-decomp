typedef unsigned char u8;
typedef int s32;

extern "C" void* fn_0354ed84(void *, const void *);

extern "C" s32 data_10555e7c;
extern "C" s32 data_10555e84;

namespace {
struct Object {
    char padding_0[4];
    char member[0x13C];
    u8 alternate;
    char padding_141[3];
    void *result;
};
}

extern "C" void fn_03529428(void *object) {
    Object *self = (Object *)object;

    void *member = self->member;
    if (self->alternate != 0) {
        self->result = fn_0354ed84(member, &data_10555e84);
        return;
    }
    self->result = fn_0354ed84(member, &data_10555e7c);
}
