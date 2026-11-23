extern "C" void fn_0247e790(int, int, int, int);
extern "C" int fn_033aa78c(void* owner, int value);

extern "C" void fn_028632f8(void* arg0) {
    int temp_r30;
    int temp_r3;

    temp_r30 = (*(int*)arg0);
    temp_r3 = fn_033aa78c((void*)(temp_r30), 0);
    if ((temp_r3 != 0) && ((int) (*(unsigned char*)((char*)arg0 + 40)) != 0)) {
        fn_0247e790(temp_r30, *(*(int**)((char*)arg0 + 32)), temp_r3, *(*(unsigned char**)((char*)arg0 + 36)));
    }
}
