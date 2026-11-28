extern "C" void fn_0362aee8(void*, void*);
extern "C" void fn_037988ac(void*, void*);

namespace {
struct Object {
    void *owner;
    char padding_4[0x10 - 4];
    unsigned char entry[0x9C];
    char member[1];
};
}

extern "C" void fn_024688f0(void *object) {
    Object *self = (Object *) object;
    if (self->entry[0] != 0) {
        fn_037988ac(self->owner, self->entry);
    }
    fn_0362aee8(self->member, 0);
}
