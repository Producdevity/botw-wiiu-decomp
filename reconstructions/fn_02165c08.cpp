extern "C" int fn_03078030(int);
extern "C" void fn_0307dafc();
extern "C" void fn_030ea2cc(void *);

extern "C" void fn_02165c08(void* arg0) {
    if ((int) (*(int*)((char*)arg0 + 16)) == 1) {
        if (fn_03078030(0) != 0) {
            fn_030ea2cc(arg0);
        }
    }
    if ((*(int*)((char*)arg0 + 16)) == 0) {
        fn_0307dafc();
        (*(int*)((char*)arg0 + 16)) = (int) ((*(int*)((char*)arg0 + 16)) + 1);
    }
}
