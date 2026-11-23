extern "C" void fn_02eb5bbc(void*, int, void*);
extern "C" void fn_030bb668(void* state);
extern "C" void fn_030bb69c(void* state);

extern "C" void fn_02eb5d38(void* arg0) {
    void* temp_r12;
    void* temp_r29;

    temp_r12 = (*(void**)((char*)arg0 + 0x37E98));
    if ((temp_r12 != 0) && ((int) (*(int*)((char*)temp_r12 + 8)) < 7)) {
        temp_r29 = (char*)arg0 + 16;
        fn_030bb668(temp_r29);
        fn_02eb5bbc(arg0, (*(int*)((char*)(((char*)arg0 + 0x30000)) + 0x7E98)), (char*)temp_r29 + 60);
        fn_030bb69c(temp_r29);
    }
}
