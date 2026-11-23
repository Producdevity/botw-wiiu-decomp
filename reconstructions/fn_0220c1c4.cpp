extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022091d8(void*, const void*);
extern "C" unsigned char data_10053f08[];

extern "C" void* fn_0220c1c4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_022091d8(storage, arg);
    *(const void**)((char*)storage + 12) = data_10053f08;
    return storage;
}
