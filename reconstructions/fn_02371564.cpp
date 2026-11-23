extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02370ccc(void*, const void*);
extern "C" unsigned char data_1009218c[];

extern "C" void* fn_02371564(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(680);
        if (!storage)
            return storage;
    }
    fn_02370ccc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1009218c;
    return storage;
}
