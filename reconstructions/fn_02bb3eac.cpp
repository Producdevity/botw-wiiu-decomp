extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bb5ffc(void*, const void*);
extern "C" unsigned char data_101b6b00[];
extern "C" unsigned char data_101b6c88[];

extern "C" void* fn_02bb3eac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(672);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02bb5ffc(storage, a);
    *(const void**)((char*)storage + 12) = data_101b6b00;
    *(const void**)((char*)storage + 20) = data_101b6c88;
    *(unsigned*)((char*)storage + 668) = 0;
    return storage;
}
