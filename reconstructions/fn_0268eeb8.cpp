extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025d7af0(void*, const void*);
extern "C" unsigned char data_1010a954[];

extern "C" void* fn_0268eeb8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    fn_025d7af0(storage, arg);
    *(const void**)((char*)storage + 12) = data_1010a954;
    return storage;
}
