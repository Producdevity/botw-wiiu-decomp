extern "C" void* fn_02c19904(void* context, int index);
extern "C" int fn_02c19940(void *);

extern "C" int fn_0274d12c(int* arg0) {
    unsigned int temp_r12;
    void* temp_r3;

    if (fn_02c19940((void *)(*arg0)) != 0) {
        temp_r3 = fn_02c19904((void*)(*arg0), 0);
        if (temp_r3 != 0) {
            temp_r12 = (*(unsigned int*)((char*)temp_r3 + 24));
            if (!(temp_r12 & 1) && !((temp_r12 >> 1U) & 1)) {
                return 1;
            }
        }
    }
    return 0;
}
