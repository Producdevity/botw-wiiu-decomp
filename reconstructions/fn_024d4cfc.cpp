extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" unsigned char data_100ca2c4[];
extern "C" const float data_100ca200;

extern "C" void* fn_024d4cfc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(72);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100ca2c4;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(20);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 52;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_100ca200;
            *(float*)(m2 + 4) = data_100ca200;
            *(float*)(m2 + 8) = data_100ca200;
        }
    }
    *(unsigned char*)((char*)storage + 64) = 1;
    *(unsigned*)((char*)storage + 68) = 0;
    return storage;
}
