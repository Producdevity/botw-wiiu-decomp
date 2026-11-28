extern "C" void fn_0357fecc(void*, void*);

namespace {
struct Binding {
    unsigned char padding_0[0x64];
    void *owner;
    void *resource;
};
}

extern "C" void fn_035800bc(void *object) {
    void *resource;
    Binding *binding = (Binding *)object;

    if (binding->owner != 0) {
        resource = binding->resource;
        if (resource != 0) {
            fn_0357fecc(binding->owner, resource);
            binding->resource = 0;
        }
    }
}
