extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_022e4748(void*, const void*);
extern "C" unsigned char data_10078e7c[];

extern "C" void* fn_022e0c68(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_022e4748(storage, arg);
    *(const void**)((char*)storage + 12) = data_10078e7c;
    return storage;
}
