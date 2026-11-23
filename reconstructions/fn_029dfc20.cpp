extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c8948(void*, const void*);
extern "C" unsigned char data_10183808[];

extern "C" void* fn_029dfc20(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_029c8948(storage, a);
    *(const void**)((char*)storage + 16) = data_10183808;
    *(unsigned*)((char*)storage + 40) = 0;
    return storage;
}
