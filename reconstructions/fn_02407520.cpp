extern "C" void fn_02959f64(int, int, void*);

extern "C" void fn_02407520(int* arg0, void* arg1, int arg2, int arg3) {
    (*(int (**)(void*, int))((char*)((*(void**)((char*)arg1 + 28))) + 220))(arg1, arg2);
    fn_02959f64(arg3, *arg0, arg1);
}
