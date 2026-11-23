extern "C" void fn_04347ca8(int, int);

extern "C" void fn_0421a394(void* object) {
    int value = *(int*)((char*)object + 164);
    if (value)
        fn_04347ca8(*(int*)((char*)object + 156), value);
}
