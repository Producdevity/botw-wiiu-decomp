extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_032d173c(void*, const void*);
extern "C" unsigned char data_1006fa98[];

extern "C" void* fn_0229de48(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_032d173c(storage, a);
    *(const void**)((char*)storage + 12) = data_1006fa98;
    *(unsigned*)((char*)storage + 16) = 0;
    return storage;
}
