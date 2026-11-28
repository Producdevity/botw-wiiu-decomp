extern "C" void fn_021405e0(void*);
extern "C" void fn_0379884c(void *, void *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x98 - 4];
    char entry[0x5C];
    unsigned char flag_f4;
};
}

extern "C" void fn_0238f574(void *object) {
    Object *self = (Object *) object;
    if (self->flag_f4 != 0) {
        fn_0379884c(self->owner, self->entry);
    }
    fn_021405e0(self);
}
