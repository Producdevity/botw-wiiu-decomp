extern "C" void fn_023fe5b0(void*);
extern "C" void fn_02b140d4(void*, void*);
extern "C" void fn_02b143d0(void*);

namespace {
struct Object {
    char padding_0[0xB];
    unsigned char flags;
    char padding_c[0x54 - 0xC];
    char member[1];
};
}

extern "C" void fn_02112cdc(void *object) {
    Object *self = (Object *) object;
    fn_023fe5b0(self);
    self->flags |= 4;
    fn_02b143d0(self->member);
    fn_02b140d4(self->member, 0);
}
