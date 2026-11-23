extern "C" void* fn_0308e578(unsigned size);
extern "C" unsigned char data_1032246c[];

extern "C" void* fn_03818d98(void* storage) {
    if (!storage) {
        storage = fn_0308e578(48);
        if (!storage)
            return storage;
    }
    *(const void**)((char*)storage) = data_1032246c;
    *(unsigned*)((char*)storage + 4) = 0;
    *(unsigned*)((char*)storage + 8) = 0;
    {
        char* m1 = (char*)storage + 12;
        if (!m1)
            m1 = (char*)fn_0308e578(8);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 20;
        if (!m2)
            m2 = (char*)fn_0308e578(8);
        if (m2) {
            *(unsigned*)(m2) = 0;
            *(unsigned*)(m2 + 4) = 0;
        }
    }
    *(unsigned*)((char*)storage + 28) = 0;
    *(unsigned*)((char*)storage + 32) = 0;
    {
        char* m3 = (char*)storage + 36;
        if (!m3)
            m3 = (char*)fn_0308e578(4);
        if (m3) {
            *(unsigned*)(m3) = 1;
        }
    }
    {
        char* m4 = (char*)storage + 40;
        if (!m4)
            m4 = (char*)fn_0308e578(8);
        if (m4) {
            *(unsigned*)(m4) = 0;
            *(unsigned*)(m4 + 4) = 0;
        }
    }
    return storage;
}
