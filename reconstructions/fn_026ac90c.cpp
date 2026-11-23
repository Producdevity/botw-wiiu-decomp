extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_025c19fc(void*, const void*);
extern "C" unsigned char data_1010e8f0[];
extern "C" const float data_1010e780;

extern "C" void* fn_026ac90c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(724);
        if (!storage)
            return storage;
    }
    fn_025c19fc(storage, arg);
    *(const void**)((char*)storage + 12) = data_1010e8f0;
    {
        char* m1 = (char*)storage + 676;
        if (!m1)
            m1 = (char*)fn_0308e578(28);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
            *(unsigned*)(m1 + 16) = 0;
            *(unsigned*)(m1 + 20) = 0;
            *(unsigned*)(m1 + 24) = 0;
        }
    }
    *(unsigned*)((char*)storage + 704) = 0;
    *(unsigned char*)((char*)storage + 708) = 0;
    {
        char* m2 = (char*)storage + 712;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_1010e780;
            *(unsigned*)(m2 + 4) = 0;
            *(unsigned*)(m2 + 8) = 0;
        }
    }
    return storage;
}
