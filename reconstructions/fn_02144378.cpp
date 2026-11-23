extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02161de0(void*, const void*);
extern "C" unsigned char data_1002c298[];

extern "C" void* fn_02144378(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_02161de0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1002c298;
    return storage;
}
