typedef unsigned int u32;

namespace {
struct Manager {
    char padding_0[0x45C];
    u32 count;
    char padding_460[4];
    void *entries;
};

struct Entry {
    char padding_0[0x10];
    void *object;
};
}

extern "C" void fn_030ea2cc(void *);
extern "C" void fn_0365df48(void *);

extern "C" void *data_1047be88;

extern "C" void fn_023a6d08(void *self) {
    void *object = 0;
    Manager *manager = (Manager *)data_1047be88;
    if (manager->count > 4U) {
        object = ((Entry *)manager->entries)->object;
    }
    fn_0365df48(object);
    fn_030ea2cc(self);
}
