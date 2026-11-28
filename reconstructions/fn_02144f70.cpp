extern "C" void fn_02144ea4(void*, int);
extern "C" void fn_022502b0(void*);
extern "C" void fn_0294f720(void *, int, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0xCC - 4];
    char entry[0x18];
    signed char flag_e4;
};
}

extern "C" void fn_02144f70(void *object) {
    Object *self = (Object *) object;
    fn_022502b0(self);
    self->flag_e4 = 0;
    fn_0294f720(self->owner, 4, self->entry);
    fn_02144ea4(self, 1);
}
