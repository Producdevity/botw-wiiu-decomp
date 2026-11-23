extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_021d2360(void*, const void*);
extern "C" unsigned char data_1000dbb4[];

extern "C" void* fn_0207a9bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_021d2360(storage, arg);
    *(const void**)((char*)storage + 12) = data_1000dbb4;
    return storage;
}
