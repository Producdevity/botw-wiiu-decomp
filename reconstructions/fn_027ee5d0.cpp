extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032c205c(void*, const void*);
extern "C" unsigned char data_10138698[];

extern "C" void* fn_027ee5d0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(100);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_032c205c(storage, a);
    *(const void**)((char*)storage + 12) = data_10138698;
    *(unsigned*)((char*)storage + 80) = 0;
    *(unsigned*)((char*)storage + 84) = 0;
    *(unsigned*)((char*)storage + 88) = 0;
    *(unsigned*)((char*)storage + 92) = 0;
    *(unsigned*)((char*)storage + 96) = 0;
    return storage;
}
