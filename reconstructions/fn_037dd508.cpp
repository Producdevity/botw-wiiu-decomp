extern "C" void fn_0351380c(void*);

namespace {
struct Counter {
    char unknown[0x24];
    int count;
};

struct Holder {
    char unknown0[0x14];
    bool active;
    char unknown1[3];
    void* source;
    char unknown2[0x1C];
    Counter* counter;
};
}

extern "C" void fn_037dd508(Holder* self) {
    if (self->active) {
        fn_0351380c(self->source);
        self->counter->count++;
    }
}
