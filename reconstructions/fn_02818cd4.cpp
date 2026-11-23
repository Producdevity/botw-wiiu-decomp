extern "C" void* fn_0308e578(unsigned size);

extern "C" const int data_10263910;
extern "C" const int data_1013d690;

namespace {
struct Storage {
    const void* first;
    const void* second;
};
}

extern "C" void fn_02818cd4(void*, void* storage) {
    Storage* result = static_cast<Storage*>(storage);
    if (!result) {
        result = static_cast<Storage*>(fn_0308e578(sizeof(Storage)));
        if (!result)
            return;
    }
    result->second = &data_10263910;
    result->first = &data_1013d690;
}
