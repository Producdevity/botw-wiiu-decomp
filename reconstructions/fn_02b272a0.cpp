extern "C" void fn_02b27174(void *arg0);
extern "C" void fn_031e083c(void*, int, int);

extern "C" void fn_02b272a0(void* arg0, int arg1, int arg2) {
    if ((int) (*(int*)((char*)arg0 + 364)) != 0) {
        fn_02b27174(arg0);
    }
    fn_031e083c(arg0, arg1, arg2);
    (*(int*)((char*)arg0 + 368)) = arg1;
}
