extern "C" void fn_0348e6e0();
extern "C" void fn_0348e6e8(void*);
extern "C" void fn_034afa20(int, int, int, int);

extern "C" void fn_03491ad8(void* arg0, int arg1, int arg2) {
    int temp_r28;

    fn_0348e6e0();
    temp_r28 = (*(int*)((char*)arg0 + 92)) + 240;
    fn_0348e6e8(arg0);
    fn_034afa20((*(int*)((char*)arg0 + 140)), arg1, arg2, temp_r28);
}
