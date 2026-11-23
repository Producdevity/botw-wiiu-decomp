extern "C" void fn_03bf6918(void*, int, int);

extern "C" void fn_03aed774(void* object, int value) {
    fn_03bf6918((char*)object + 68, *(int*)((char*)object + 80), value);
}
