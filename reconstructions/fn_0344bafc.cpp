extern "C" void fn_0348799c(void* object);

namespace {

struct Listener {
    void* const* vtable;
};

struct Notifier {
    unsigned char unknown000[4];
    void* target;
    unsigned char unknown008[0x200 - 8];
    Listener* listener;
};

typedef void (*NotifyFn)(Listener*, Notifier*);

}  // namespace

extern "C" void fn_0344bafc(void* object) {
    Notifier* self = static_cast<Notifier*>(object);
    fn_0348799c(self->target);
    Listener* listener = self->listener;
    if (listener) {
        reinterpret_cast<NotifyFn>(listener->vtable[3])(listener, self);
    }
}
