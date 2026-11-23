extern "C" void fn_0320fadc(int, int, int, int, int);

extern "C" void fn_02e4dd00(void* object, int value, int index, int count) {
    fn_0320fadc(*(int*)(*(char**)((char*)object + 4)), value, index, *(unsigned char*)((char*)object + 8), count);
}
