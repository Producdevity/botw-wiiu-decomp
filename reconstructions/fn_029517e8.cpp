extern "C" void fn_032c4568(int, int, void*);
extern "C" int fn_033943e0(void*, int);

extern "C" void fn_029517e8(void* arg0, void* arg1, int arg2) {
    int temp_r3;

    temp_r3 = (*(int (**)(void*))((char*)((*(void**)((char*)arg1 + 232))) + 804))(arg1);
    if (temp_r3 != 0) {
        fn_032c4568(temp_r3, fn_033943e0(arg0, arg2), (char*)arg0 + 504);
    }
}
