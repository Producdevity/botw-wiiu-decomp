extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0254a220(void*, const void*);
extern "C" unsigned char data_100dc290[];

extern "C" void* fn_0254a994(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_0254a220(storage, a);
    *(const void**)((char*)storage + 12) = data_100dc290;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
