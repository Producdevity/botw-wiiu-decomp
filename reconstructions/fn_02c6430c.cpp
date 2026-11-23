extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02aa9b78(void* object, void* argument);
extern "C" unsigned char data_101c8c58[];

extern "C" void* fn_02c6430c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(20);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02aa9b78(storage, (void*)a);
    *(const void**)((char*)storage + 12) = data_101c8c58;
    *(unsigned char*)((char*)storage + 16) = 0;
    return storage;
}
