extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_101522e0[];
extern "C" const float data_10152230;

extern "C" void* fn_0289c57c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_101522e0;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(24);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
            *(unsigned*)(m1 + 20) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 56;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_10152230;
            *(float*)(m2 + 4) = data_10152230;
            *(float*)(m2 + 8) = data_10152230;
        }
    }
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
