extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0379468c(void* storage, const void* source);
extern "C" unsigned char data_100b7850[];
extern "C" const float data_100b7820;

extern "C" void* fn_02448df4(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(32);
        if (!storage)
            return storage;
    }
    fn_0379468c(storage, arg);
    *(const void**)((char*)storage + 12) = data_100b7850;
    *(unsigned*)((char*)storage + 16) = 0;
    *(unsigned*)((char*)storage + 20) = 0;
    *(float*)((char*)storage + 24) = data_100b7820;
    *(unsigned*)((char*)storage + 28) = 0;
    return storage;
}
