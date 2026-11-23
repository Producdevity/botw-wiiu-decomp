extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0254a220(void*, const void*);
extern "C" unsigned char data_100dc3fc[];

extern "C" void* fn_0254b42c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(44);
        if (!storage)
            return storage;
    }
    fn_0254a220(storage, arg);
    *(const void**)((char*)storage + 12) = data_100dc3fc;
    return storage;
}
