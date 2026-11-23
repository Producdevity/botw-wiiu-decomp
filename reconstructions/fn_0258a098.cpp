extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0258a4a0(void*, const void*);
extern "C" unsigned char data_100e6570[];

extern "C" void* fn_0258a098(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0258a4a0(storage, a);
    *(const void**)((char*)storage + 12) = data_100e6570;
    *(unsigned*)((char*)storage + 40) = 0;
    return storage;
}
