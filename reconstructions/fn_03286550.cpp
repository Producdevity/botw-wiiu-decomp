extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03286d28(void*, const void*);
extern "C" unsigned char data_102a0f10[];

extern "C" void* fn_03286550(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(12);
        if (!storage)
            return storage;
    }
    fn_03286d28(storage, arg);
    *(const void**)((char*)storage + 8) = data_102a0f10;
    return storage;
}
