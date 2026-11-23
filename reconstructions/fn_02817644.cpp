extern "C" void* fn_0308e578(unsigned size);
extern "C" void fn_028153c8(void*, const void*);
extern "C" unsigned char data_1013d818[];

extern "C" void* fn_02817644(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(164);
        if (!storage)
            return storage;
    }
    fn_028153c8(storage, arg);
    *(const void**)((char*)storage + 12) = data_1013d818;
    {
        char* m1 = (char*)storage + 108;
        if (!m1)
            m1 = (char*)fn_0308e578(36);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
            *(unsigned*)(m1 + 20) = 0;
            *(unsigned*)(m1 + 24) = 0;
            *(unsigned*)(m1 + 28) = 0;
            *(unsigned*)(m1 + 32) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 144;
        if (!m2)
            m2 = (char*)fn_0308e578(16);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
            *(unsigned*)(m2 + 12) = 0;
        }
    }
    *(unsigned char*)((char*)storage + 160) = 0;
    *(unsigned char*)((char*)storage + 161) = 0;
    return storage;
}
