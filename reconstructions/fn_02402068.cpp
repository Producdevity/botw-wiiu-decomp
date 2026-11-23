extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023fe8ec(void*, const void*);
extern "C" unsigned char data_100aa898[];

extern "C" void* fn_02402068(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_023fe8ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_100aa898;
    return storage;
}
