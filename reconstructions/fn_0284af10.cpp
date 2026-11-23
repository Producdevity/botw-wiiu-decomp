extern "C" int fn_0247ddfc();
extern "C" int fn_0247df20();
extern "C" void fn_0247e790(int, int, int, int);
extern "C" void fn_028494ac(void*, int);
extern "C" void fn_02c4fe90();

extern "C" void fn_0284af10(void* arg0, int arg1) {
    int temp_r31;

    fn_02c4fe90();
    temp_r31 = fn_0247df20();
    fn_0247e790((*(int*)arg0), temp_r31, fn_0247ddfc(), *(*(unsigned char**)((char*)arg0 + 80)));
    fn_028494ac(arg0, arg1);
}
