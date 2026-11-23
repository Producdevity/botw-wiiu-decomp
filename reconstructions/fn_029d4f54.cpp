extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029d4de8(void*, const void*);
extern "C" unsigned char data_10180c7c[];

extern "C" void* fn_029d4f54(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_029d4de8(storage, arg);
    *(const void**)((char*)storage + 16) = data_10180c7c;
    return storage;
}
