extern "C" void fn_02b85948(void*, int, int, int);

extern "C" int fn_02207330(void* arg0, int arg1) {
    (*(int (**)(void*))((char*)((*(void**)((char*)arg0 + 24))) + 28))((char*)arg0 + 20);
    fn_02b85948((char*)arg0 + 28, arg1, (*(int*)((char*)arg0 + 20)), *(*(int**)((char*)arg0 + 16)));
    return 1;
}
