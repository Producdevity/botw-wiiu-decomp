extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_037b7cf0(void* storage, const void* source);
extern "C" void fn_02b614e0(void*);
extern "C" unsigned char data_100d4cd4[];
extern "C" const float data_100d4c04;

extern "C" void* fn_02513eac(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(76);
        if (!storage)
            return storage;
    }
    fn_037b7cf0(storage, arg);
    *(const void**)((char*)storage + 12) = data_100d4cd4;
    {
        char* m1 = (char*)storage + 32;
        if (!m1)
            m1 = (char*)fn_0308e578(16);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
        }
    }
    *(unsigned*)((char*)storage + 48) = 0;
    fn_02b614e0((char*)storage + 52);
    {
        char* m2 = (char*)storage + 60;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_100d4c04;
            *(float*)(m2 + 4) = data_100d4c04;
            *(float*)(m2 + 8) = data_100d4c04;
        }
    }
    *(unsigned char*)((char*)storage + 72) = 0;
    return storage;
}
