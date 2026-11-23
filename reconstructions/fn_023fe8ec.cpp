extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02aa9b78(void* object, void* argument);
extern "C" unsigned char data_100a9f70[];

extern "C" void* fn_023fe8ec(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02aa9b78(storage, (void*)a);
    *(const void**)((char*)storage + 12) = data_100a9f70;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    return storage;
}
