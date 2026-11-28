extern "C" void fn_0221da14(void*);
extern "C" void fn_02212ea4(void*, void*);
extern "C" bool fn_02953444(void* owner, int event, int a, int b, int c);
extern "C" bool fn_02953354(void* owner, int event, int a, int b, int c);

namespace {
struct Object {
    void* owner;
    char unknown[0x18];
    const unsigned char* flags;
};
}

extern "C" void fn_02212f44(Object* self) {
    fn_0221da14(self);
    if (*self->flags != 0) {
        if (fn_02953444(self->owner, 0x14, 0, 0, 0)) {
            fn_02212ea4(self, reinterpret_cast<void*>(1));
        }
        if (fn_02953354(self->owner, 0x14, 0, 0, 0)) {
            fn_02212ea4(self, 0);
        }
    }
}
