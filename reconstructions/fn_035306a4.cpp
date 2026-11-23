extern "C" void* fn_03530688();
extern "C" int fn_03b8f1e0(void*);

extern "C" int fn_035306a4() {
    int temp_r3;
    void* temp_r12;
    void* temp_r3_2;

    temp_r3_2 = fn_03530688();
    if (temp_r3_2 != 0) {
        temp_r12 = (*(void**)temp_r3_2);
        if ((temp_r12 != 0) && ((unsigned int) (*(unsigned int*)((char*)temp_r12 + 12)) == (unsigned int) (*(unsigned int*)((char*)temp_r3_2 + 4)))) {
            temp_r3 = fn_03b8f1e0(temp_r12);
            if (temp_r3 != 0) {
                return temp_r3 + 52;
            }
        }
    }
    return 0;
}
