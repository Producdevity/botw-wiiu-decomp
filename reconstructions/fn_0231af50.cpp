extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_1008483c[];

extern "C" void* fn_0231af50(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(24);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_1008483c;
    *(unsigned char*)((char*)storage + 16) = 0;
    *(unsigned char*)((char*)storage + 17) = 0;
    *(unsigned*)((char*)storage + 20) = -1;
    return storage;
}
