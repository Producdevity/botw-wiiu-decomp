extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02549c4c(void* storage, const void* arg);
extern "C" unsigned char data_10173b00[];
extern "C" const float data_10173a88;

extern "C" void* fn_0297f784(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(92);
        if (!storage)
            return storage;
    }
    fn_02549c4c(storage, arg);
    *(const void**)((char*)storage + 12) = data_10173b00;
    {
        char* m1 = (char*)storage + 60;
        if (!m1)
            m1 = (char*)fn_0308e578(16);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
        }
    }
    *(unsigned char*)((char*)storage + 76) = 0;
    {
        char* m2 = (char*)storage + 80;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_10173a88;
            *(float*)(m2 + 4) = data_10173a88;
            *(float*)(m2 + 8) = data_10173a88;
        }
    }
    return storage;
}
