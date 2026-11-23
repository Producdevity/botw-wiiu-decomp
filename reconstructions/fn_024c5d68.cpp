extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0315942c(void*, const void*);
extern "C" unsigned char data_100c8478[];

extern "C" void* fn_024c5d68(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0315942c(storage, a);
    *(const void**)((char*)storage + 12) = data_100c8478;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned*)((char*)storage + 36) = 0;
    return storage;
}
