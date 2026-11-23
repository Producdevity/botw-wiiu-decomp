extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_034619f0(void*, const void*);
extern "C" unsigned char data_102c8768[];

extern "C" void* fn_0345dee0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(16);
        if (!storage)
            return storage;
    }
    fn_034619f0(storage, arg);
    *(const void**)((char*)storage + 12) = data_102c8768;
    return storage;
}
