extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023da9d8(void*, const void*);
extern "C" unsigned char data_100a61b0[];

extern "C" void* fn_023e5830(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(140);
        if (!storage)
            return storage;
    }
    fn_023da9d8(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a61b0;
    return storage;
}
