extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_030ff6a0(void*, const void*);
extern "C" unsigned char data_1017c15c[];

extern "C" void* fn_029bbd7c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_030ff6a0(storage, arg);
    *(const void**)((char*)storage + 16) = data_1017c15c;
    *(unsigned char*)((char*)storage + 20) = 0;
    *(unsigned char*)((char*)storage + 21) = 0;
    *(unsigned char*)((char*)storage + 22) = 0;
    *(unsigned char*)((char*)storage + 23) = 0;
    return storage;
}
