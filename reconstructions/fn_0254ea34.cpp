extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0254da84(void*, const void*);
extern "C" unsigned char data_100dcbc8[];

extern "C" void* fn_0254ea34(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    fn_0254da84(storage, arg);
    *(const void**)((char*)storage + 12) = data_100dcbc8;
    return storage;
}
