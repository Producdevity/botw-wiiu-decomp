extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023fe8ec(void*, const void*);
extern "C" unsigned char data_100a67c4[];

extern "C" void* fn_023e7ae4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_023fe8ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a67c4;
    return storage;
}
