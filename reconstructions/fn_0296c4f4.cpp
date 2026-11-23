extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0296b948(void*, const void*);
extern "C" unsigned char data_101705c4[];

extern "C" void* fn_0296c4f4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(104);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0296b948(storage, a);
    *(const void**)((char*)storage + 12) = data_101705c4;
    *(unsigned*)((char*)storage + 96) = 0;
    *(unsigned char*)((char*)storage + 100) = 0;
    return storage;
}
