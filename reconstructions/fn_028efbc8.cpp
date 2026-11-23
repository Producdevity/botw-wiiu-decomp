extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025a0360(void*, const void*);
extern "C" unsigned char data_1015d414[];

extern "C" void* fn_028efbc8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(60);
        if (!storage)
            return storage;
    }
    fn_025a0360(storage, arg);
    *(const void**)((char*)storage + 12) = data_1015d414;
    return storage;
}
