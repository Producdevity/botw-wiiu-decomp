extern "C" unsigned int fn_0348609c(int);
extern "C" void fn_03489294(void*, int);

extern "C" void fn_02520d40(void* arg0, unsigned int arg1) {
    if (fn_0348609c((*(int*)((char*)arg0 + 384))) != arg1) {
        fn_03489294((*(void**)((char*)arg0 + 384)), arg1);
    }
    if (fn_0348609c((*(int*)((char*)arg0 + 380))) != arg1) {
        fn_03489294((*(void**)((char*)arg0 + 380)), arg1);
    }
}
