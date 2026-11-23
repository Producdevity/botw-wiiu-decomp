extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02ba6314(void*, const void*);
extern "C" unsigned char data_101b4f00[];
extern "C" unsigned char data_101b50e8[];

extern "C" void* fn_02ba7fdc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(288);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02ba6314(storage, a);
    *(const void**)((char*)storage + 12) = data_101b4f00;
    *(const void**)((char*)storage + 20) = data_101b50e8;
    return storage;
}
