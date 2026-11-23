extern "C" void fn_04348658(int);

extern "C" void fn_0309c56c(void* object, int value) {
    *(int*)((char*)object + 80) = value;
    fn_04348658(value);
}
