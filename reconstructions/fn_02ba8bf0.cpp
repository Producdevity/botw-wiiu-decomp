extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02b8f3fc(void*, const void*);
extern "C" unsigned char data_101b5298[];
extern "C" unsigned char data_101b5410[];

extern "C" void* fn_02ba8bf0(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(40);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02b8f3fc(storage, a);
    *(const void**)((char*)storage + 12) = data_101b5298;
    *(const void**)((char*)storage + 20) = data_101b5410;
    return storage;
}
