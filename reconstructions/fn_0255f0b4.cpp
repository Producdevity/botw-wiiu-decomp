extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02848bdc(void*, const void*);
extern "C" unsigned char data_100df830[];

extern "C" void* fn_0255f0b4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(88);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02848bdc(storage, a);
    *(const void**)((char*)storage + 12) = data_100df830;
    *(unsigned*)((char*)storage + 80) = 0;
    *(unsigned*)((char*)storage + 84) = 0;
    return storage;
}
