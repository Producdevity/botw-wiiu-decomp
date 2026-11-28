extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0230b9f8(void* storage, const void* arg);
extern "C" void * fn_02b619b8(void *memory);
extern "C" unsigned char data_10070394[];

extern "C" void* fn_022a05c0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(96);
        if (!storage)
            return storage;
    }
    fn_0230b9f8(storage, arg);
    *(const void**)((char*)storage + 12) = data_10070394;
    fn_02b619b8((char*)storage + 80);
    return storage;
}
