extern "C" int fn_03078030(int);
extern "C" void fn_0307dd2c();
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_021660bc(void* arg0) {
    if ((int) (*(int*)((char*)arg0 + 16)) == 1) {
        if (fn_03078030(1) != 0) {
            fn_030ea2cc(arg0);
        }
    }
    if ((*(int*)((char*)arg0 + 16)) == 0) {
        fn_0307dd2c();
        (*(int*)((char*)arg0 + 16)) = (int) ((*(int*)((char*)arg0 + 16)) + 1);
    }
}
