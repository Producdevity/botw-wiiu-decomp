extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_029c84d4(void*, const void*);
extern "C" unsigned char data_1017d494[];

extern "C" void* fn_029c41b8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(172);
        if (!storage)
            return storage;
    }
    fn_029c84d4(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017d494;
    return storage;
}
