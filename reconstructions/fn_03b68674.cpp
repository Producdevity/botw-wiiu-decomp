extern "C" void fn_04348588(int, int, int);
extern "C" void fn_043486d0(int, int, int);

extern "C" void fn_03b68674(int* arg0, void* arg1, int arg2, int arg3) {
    if (arg2 != 0) {
        fn_043486d0(*arg0, (*(int*)((char*)arg1 + 4)), (*(int*)arg1));
    }
    if (arg3 != 0) {
        fn_04348588(*arg0, (*(int*)((char*)arg1 + 4)), (*(int*)arg1));
    }
}
