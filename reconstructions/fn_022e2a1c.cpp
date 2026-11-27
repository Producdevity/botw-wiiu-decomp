extern "C" void fn_02b1512c(int);
extern "C" void fn_02b616bc(void *, void *);
extern "C" void fn_02b616f0(void*, void*);
extern "C" int fn_02b61950(void*, void*);

namespace {
struct Object {
    char padding_0[0xB8];
    char list[8];
    char tail[1];
};
}

extern "C" void fn_022e2a1c(void **holder) {
    Object *self = (Object *)holder;
    void *key = *holder;

    fn_02b616f0(self->list, key);
    fn_02b616bc(self->list, (void *)fn_02b61950(self->list, key));
    fn_02b1512c((int)self->tail);
}
