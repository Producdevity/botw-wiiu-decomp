extern "C" void fn_02950880(int);
extern "C" void fn_0378b19c(void*, void*);
struct ProcLink;
extern "C" void fn_0378c734(ProcLink *);

namespace {
struct Object {
    void *owner;
    char padding_4[0x38 - 4];
    char link[1];
};
}

extern "C" void fn_0251cb28(void **object) {
    Object *self = (Object *) object;
    fn_0378c734((ProcLink *) self->link);
    fn_0378b19c(self->owner, 0);
    fn_02950880((int) self->owner);
}
