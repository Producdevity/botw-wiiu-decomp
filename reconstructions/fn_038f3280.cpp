extern "C" void fn_038f31c4(void*);

extern "C" void fn_038f3280(void* arg0, int arg1) {
    if ((int) (*(unsigned char*)((char*)arg0 + 5)) != 0) {
        fn_038f31c4(arg0);
    }
    if ((int) (*(unsigned char*)((char*)arg0 + 4)) != 0) {
        (*(int (**)(void*, int))((char*)((*(void**)((char*)arg0 + 8))) + 44))(arg0, arg1);
    }
}
