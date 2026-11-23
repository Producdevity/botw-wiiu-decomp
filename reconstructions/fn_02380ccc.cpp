extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_0237adb0(void*, const void*);
extern "C" unsigned char data_10094450[];
extern "C" const float data_10094358;

extern "C" void* fn_02380ccc(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(136);
        if (!storage)
            return storage;
    }
    fn_0237adb0(storage, arg);
    *(const void**)((char*)storage + 12) = data_10094450;
    {
        char* m1 = (char*)storage + 76;
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
    *(unsigned*)((char*)storage + 100) = 0;
    *(unsigned*)((char*)storage + 104) = 0;
    *(unsigned char*)((char*)storage + 108) = 0;
    {
        char* m2 = (char*)storage + 112;
        if (!m2)
            m2 = (char*)fn_0308e578(16);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
            *(unsigned*)(m2 + 12) = 0;
        }
    }
    *(float*)((char*)storage + 128) = data_10094358;
    *(float*)((char*)storage + 132) = data_10094358;
    return storage;
}
