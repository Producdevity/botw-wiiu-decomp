extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02504c2c(void*, const void*);
extern "C" unsigned char data_1013ba48[];

extern "C" void* fn_0280c978(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(120);
        if (!storage)
            return storage;
    }
    fn_02504c2c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1013ba48;
    return storage;
}
