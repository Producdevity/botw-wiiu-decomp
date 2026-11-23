extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c8cc68(void*, const void*);
extern "C" unsigned char data_101c9260[];

extern "C" void* fn_02c65fb0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_02c8cc68(storage, arg);
    *(const void**)((char*)storage + 12) = data_101c9260;
    return storage;
}
