extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0230afec(void*, const void*);
extern "C" unsigned char data_10020d68[];

extern "C" void* fn_020ff454(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    fn_0230afec(storage, arg);
    *(const void**)((char*)storage + 12) = data_10020d68;
    return storage;
}
