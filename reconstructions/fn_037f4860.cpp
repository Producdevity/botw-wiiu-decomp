extern "C" void fn_037f4838(int);

extern "C" void fn_037f4860(int value, void* object) {
    *(int*)((char*)object + 8) = value;
    fn_037f4838(value);
}
