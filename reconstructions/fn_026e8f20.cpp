extern "C" void* fn_0308e578(unsigned size);

namespace {
struct Storage {
    unsigned first;
    unsigned second;
};
}

extern "C" void* fn_026e8f20(void* storage) {
    Storage* result;
    if (!storage) {
        result = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
        if (!result)
            return result;
    } else {
        result = static_cast<Storage*>(storage);
    }
    result->second = 0;
    result->first = 0;
    return result;
}
