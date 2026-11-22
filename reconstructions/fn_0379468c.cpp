extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030e9980(void* storage, const void* source);
extern "C" const unsigned char data_10319db0[];

extern "C" void* fn_0379468c(void* storage, const void* source) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_030e9980(storage, source);
    *reinterpret_cast<const unsigned char**>(
        static_cast<unsigned char*>(storage) + 12) = data_10319db0;
    return storage;
}
