extern "C" void* fn_0308e578(unsigned size);
extern "C" void* fn_0289d338(void*, const void*);
extern "C" unsigned char data_101122d8[];
extern "C" const float data_10112220;

extern "C" void* fn_026c811c(void* storage, const void* arg) {
    if (!storage) {
        storage = fn_0308e578(156);
        if (!storage)
            return storage;
    }
    fn_0289d338(storage, arg);
    *(const void**)((char*)storage + 12) = data_101122d8;
    {
        char* m1 = (char*)storage + 112;
        if (!m1)
            m1 = (char*)fn_0308e578(16);
        if (m1) {
            *(unsigned*)(m1) = 0;
            *(unsigned*)(m1 + 4) = 0;
            *(unsigned*)(m1 + 8) = 0;
            *(unsigned*)(m1 + 12) = 0;
        }
    }
    {
        char* m2 = (char*)storage + 128;
        if (!m2)
            m2 = (char*)fn_0308e578(12);
        if (m2) {
            *(float*)(m2) = data_10112220;
            *(float*)(m2 + 4) = data_10112220;
            *(float*)(m2 + 8) = data_10112220;
        }
    }
    *(unsigned*)((char*)storage + 140) = 0;
    *(unsigned*)((char*)storage + 144) = 0;
    *(unsigned*)((char*)storage + 148) = 0;
    *(unsigned*)((char*)storage + 152) = 0;
    return storage;
}
