extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_10153394[];

extern "C" void* fn_028a1e9c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10153394;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 0;
    *(unsigned*)((char*)storage + 44) = 0;
    return storage;
}
