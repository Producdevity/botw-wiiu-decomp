extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_02409810(void*, const void*);
extern "C" unsigned char data_100abe2c[];
extern "C" const float data_100abdc0;

extern "C" void* fn_02408ce8(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(260);
        if (!storage)
            return storage;
    }
    fn_02409810(storage, arg);
    *(const void**)((char*)storage + 12) = data_100abe2c;
    {
        char* m1 = (char*)storage + 232;
        if (!m1)
            m1 = (char*)fn_0308e578(12);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 244;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_100abdc0;
            *(float*)(m2 + 4) = data_100abdc0;
            *(float*)(m2 + 8) = data_100abdc0;
        }
    }
    *(unsigned char*)((char*)storage + 256) = 0;
    return storage;
}
