extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_03c4d6e0(void*, const void*);
extern "C" unsigned char data_1035ce70[];

extern "C" void* fn_03a361c8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(216);
        if (!storage)
            return storage;
    }
    fn_03c4d6e0(storage, arg);
    *(const void**)((char*)storage + 8) = data_1035ce70;
    return storage;
}
