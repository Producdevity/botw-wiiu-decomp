extern "C" void* data_1046f37c;
extern "C" void fn_033ee768(int, int, int);
extern "C" void fn_039e483c(int, int);
extern "C" void fn_039e4b60(int, int, int);

extern "C" void fn_033d0524(void* arg0, int arg1) {
    if (arg1 != (unsigned char) (*(unsigned char*)((char*)arg0 + 52))) {
        (*(unsigned char*)((char*)arg0 + 52)) = arg1;
        fn_039e4b60((*(int*)((char*)arg0 + 32)), 0, -1);
        fn_039e483c((*(int*)((char*)arg0 + 32)), 2);
        fn_033ee768((int)data_1046f37c, (*(int*)((char*)arg0 + 32)), (*(unsigned char*)((char*)arg0 + 52)) ^ 1);
    }
}
