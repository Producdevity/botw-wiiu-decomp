extern "C" void fn_034cc628(int, void*);

extern "C" void fn_034cc350(int object) {
    int value = *(int*)(object + 148);
    *(int*)(object + 136) = 0;
    fn_034cc628(value, (void*)object);
}
