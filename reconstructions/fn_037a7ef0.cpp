#include "botw/safe_string.h"

extern "C" const unsigned char data_10263910[];

namespace {
struct Owner {
    unsigned char unknown_000[0x3a0];
    void* registry;
};
}

extern "C" void* fn_034c38cc(void* registry, const SafeString* name);

extern "C" void* fn_037a7ef0(void* owner, void* key) {
    void* registry = static_cast<Owner*>(owner)->registry;
    if (registry) {
        SafeString name;
        name.string = static_cast<const char*>(key);
        name.vtable = data_10263910;
        return fn_034c38cc(registry, &name);
    }
    return 0;
}
