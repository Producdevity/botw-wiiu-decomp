extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Storage {
    unsigned first;
    unsigned second;
};
}

extern "C" void* fn_03c6ebb4(void* storage) {
    if (!storage) {
        storage = fn_0308e578(sizeof(Storage));
        if (!storage)
            return storage;
    }
    Storage* result = static_cast<Storage*>(storage);
    result->first = 0;
    result->second = 0;
    return result;
}
