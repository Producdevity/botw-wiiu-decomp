extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0225e140(void*, const void*);
extern "C" unsigned char data_10064c94[];

extern "C" void* fn_0225e450(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_0225e140(storage, arg);
    *(const void**)((char*)storage + 12) = data_10064c94;
    return storage;
}
