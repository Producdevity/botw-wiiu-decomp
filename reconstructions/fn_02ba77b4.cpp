extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02ba7bd8(void*, const void*);
extern "C" unsigned char data_101b499c[];
extern "C" unsigned char data_101b497c[];

extern "C" void* fn_02ba77b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(252);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02ba7bd8(storage, a);
    *(const void**)((char*)storage + 12) = data_101b499c;
    *(const void**)((char*)storage + 20) = data_101b497c;
    return storage;
}
