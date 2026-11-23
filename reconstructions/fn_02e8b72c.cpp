extern "C" int fn_02e89ab4(void*);

extern "C" int fn_02e8b72c(void* arg0, int arg1) {
    int temp_r12;
    unsigned int temp_r3;

    if (arg1 != 0) {
        temp_r3 = fn_02e89ab4(arg0);
        temp_r12 = (*(int*)((char*)arg0 + 56));
        if ((unsigned int) (temp_r12 + arg1) > temp_r3) {
            return temp_r3 - temp_r12;
        }
    }
    return arg1;
}
