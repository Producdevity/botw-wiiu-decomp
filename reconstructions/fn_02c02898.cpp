extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" unsigned char data_101beea0[];

extern "C" void* fn_02c02898(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(28);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_030ff6a0(storage, a);
    *(const void**)((char*)storage + 16) = data_101beea0;
    *(unsigned*)((char*)storage + 20) = 0;
    *(unsigned char*)((char*)storage + 24) = 0;
    return storage;
}
