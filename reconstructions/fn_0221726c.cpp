extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02216e94(void*, const void*);
extern "C" unsigned char data_10057044[];

extern "C" void* fn_0221726c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02216e94(storage, a);
    *(const void**)((char*)storage + 12) = data_10057044;
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
