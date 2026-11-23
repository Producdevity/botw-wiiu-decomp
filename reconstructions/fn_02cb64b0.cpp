extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02c7f3ac(void*, const void*);
extern "C" unsigned char data_101d4cd4[];

extern "C" void* fn_02cb64b0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(64);
        if (!storage)
            return storage;
    }
    fn_02c7f3ac(storage, arg);
    *(const void**)((char*)storage + 12) = data_101d4cd4;
    return storage;
}
