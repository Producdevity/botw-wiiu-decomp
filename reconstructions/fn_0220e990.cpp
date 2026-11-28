extern "C" void fn_0221da14(void*);
extern "C" void fn_0221da90(void*);
extern "C" void fn_030ea2e0(void*);

namespace {
struct Dispatch {
    char unknown[0x4C];
    void (*handler)(void*);
};

struct Object {
    char unknown0[0x20];
    Dispatch* dispatch;
    char unknown1[8];
    int state;
};
}

extern "C" void fn_0220e990(Object* self) {
    fn_0221da14(self);
    void (*handler)(void*) = self->dispatch->handler;
    handler(reinterpret_cast<char*>(self) + 0x18);
    if (self->state == 3) {
        fn_0221da90(self);
        return;
    }
    if (self->state == 4) {
        fn_030ea2e0(self);
    }
}
