extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0250c71c(void*, const void*);
extern "C" unsigned char data_100d33e0[];

extern "C" void* fn_0250cafc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(52);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0250c71c(storage, a);
    *(const void**)((char*)storage + 12) = data_100d33e0;
    *(unsigned*)((char*)storage + 48) = 0;
    return storage;
}
