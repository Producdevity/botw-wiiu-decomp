extern "C" void fn_03b39bb4(void*);

namespace {
struct Dispatch {
    char unknown[0xFC];
    void (*handler)(void*);
};

struct Owner {
    char unknown0[0x18];
    Dispatch* dispatch;
    char unknown1[0x14];
    bool active;
};
}

extern "C" void fn_03b2b364(Owner* self) {
    if (self->active) {
        fn_03b39bb4(reinterpret_cast<char*>(self) + 0xEC);
        void (*handler)(void*) = self->dispatch->handler;
        handler(self);
    }
}
