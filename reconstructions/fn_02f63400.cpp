typedef int s32;

extern "C" void fn_02f63160(void*, void*);

namespace {
struct Other {
    char padding_0[0x3C];
    void *const *vtable;
};
}

extern "C" void fn_02f63400(void *object, void *other) {
    void *const *vtable;
    if (other == 0) {
        fn_02f63160(object, other);
        return;
    }
    vtable = ((Other *) other)->vtable;
    if (((s32 (*)(void *)) vtable[21])(other) != -1) {
        fn_02f63160(object, other);
    }
}
