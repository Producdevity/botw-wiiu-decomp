extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_101284e8[];
extern "C" const float data_1012849c;

extern "C" void* fn_02767808(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_101284e8;
    *(unsigned*)((char*)storage + 32) = 0;
    *(unsigned*)((char*)storage + 36) = 0;
    *(unsigned*)((char*)storage + 40) = 0;
    *(float*)((char*)storage + 44) = data_1012849c;
    return storage;
}
