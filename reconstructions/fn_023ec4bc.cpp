extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_023ec8ec(void*, const void*);
extern "C" unsigned char data_100a7780[];

extern "C" void* fn_023ec4bc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(108);
        if (!storage)
            return storage;
    }
    fn_023ec8ec(storage, arg);
    *(const void**)((char*)storage + 12) = data_100a7780;
    return storage;
}
