extern "C" void fn_0294f828(void*, void*);

namespace {
struct Object {
    void *owner;
    char padding_4[0xBC - 4];
    char entry_bc[8];
    int active_c4;
    char padding_c8[0xD8 - 0xC8];
    char entry_d8[8];
    int active_e0;
};
}

extern "C" void fn_0220afc8(void *object) {
    Object *self = (Object *) object;
    if (self->active_e0 != 0) {
        fn_0294f828(self->owner, self->entry_d8);
    }
    if (self->active_c4 != 0) {
        fn_0294f828(self->owner, self->entry_bc);
    }
}
