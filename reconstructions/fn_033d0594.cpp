extern "C" void *data_1047c318;
extern "C" void fn_033d0524(void*, int);
extern "C" void fn_03984eb0(int, int, int, int);

extern "C" void fn_033d0594(int* arg0, void* arg1, int arg2) {
    int temp_r31;

    temp_r31 = (*(int*)((char*)data_1047c318 + 228));
    fn_033d0524(arg1, arg2);
    fn_03984eb0(*arg0, (*(int*)((char*)arg1 + 32)), 0, temp_r31);
}
