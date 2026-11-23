extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02f07670(void*, const void*);
extern "C" unsigned char data_1021c404[];

extern "C" void* fn_02eca460(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(188);
        if (!storage)
            return storage;
    }
    const void* a = arg;
    fn_02f07670(storage, a);
    *(const void**)((char*)storage + 16) = data_1021c404;
    *(unsigned*)((char*)storage + 164) = 0;
    *(unsigned*)((char*)storage + 168) = 0;
    *(unsigned*)((char*)storage + 172) = 0;
    *(unsigned*)((char*)storage + 176) = 0;
    *(unsigned*)((char*)storage + 180) = 0;
    *(unsigned*)((char*)storage + 184) = 0;
    return storage;
}
