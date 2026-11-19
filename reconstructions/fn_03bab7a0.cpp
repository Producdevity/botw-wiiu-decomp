extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Storage {
    unsigned value;
};
}

extern "C" void* fn_03bab7a0(void* storage) {
    if (!storage) {
        storage = fn_0308e578(sizeof(Storage));
        if (!storage)
            return storage;
    }
    static_cast<Storage*>(storage)->value = 0;
    return storage;
}
