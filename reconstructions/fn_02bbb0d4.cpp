extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02bb5ffc(void*, const void*);
extern "C" unsigned char data_101b7304[];
extern "C" unsigned char data_101b748c[];

extern "C" void* fn_02bbb0d4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(672);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02bb5ffc(storage, a);
    *(const void**)((char*)storage + 12) = data_101b7304;
    *(const void**)((char*)storage + 20) = data_101b748c;
    *(unsigned*)((char*)storage + 668) = 0;
    return storage;
}
