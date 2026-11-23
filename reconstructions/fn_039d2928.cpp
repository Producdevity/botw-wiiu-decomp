extern "C" void* fn_0308e578(unsigned size);
extern "C" unsigned char data_10352b08[];

extern "C" void* fn_039d2928(void* storage) {
    if (!storage) {
        storage = fn_0308e578(68);
        if (!storage)
            return storage;
    }
    *(const void**)((char*)storage + 64) = data_10352b08;
    {
        char* m1 = (char*)storage;
        if (!m1)
            m1 = (char*)fn_0308e578(12);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 12;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
        }
    }
    {
        char* m3 = (char*)storage + 24;
        if (!m3)
            m3 = (char*)fn_0308e578(12);
        if (m3) {
            *(unsigned*)(m3) = 0;
            *(unsigned*)(m3 + 4) = 0;
            *(unsigned*)(m3 + 8) = 0;
        }
    }
    {
        char* m4 = (char*)storage + 36;
        if (!m4)
            m4 = (char*)fn_0308e578(12);
        if (m4) {
            *(unsigned*)(m4) = 0;
            *(unsigned*)(m4 + 4) = 0;
            *(unsigned*)(m4 + 8) = 0;
        }
    }
    *(unsigned*)((char*)storage + 48) = 0;
    *(unsigned*)((char*)storage + 52) = 0;
    *(unsigned*)((char*)storage + 56) = 0;
    *(unsigned*)((char*)storage + 60) = 0;
    return storage;
}
