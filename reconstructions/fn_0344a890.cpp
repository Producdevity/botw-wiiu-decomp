extern "C" void fn_03488aec(void *object, void *argument);

extern "C" void fn_0344a890(void* object, void* arg1) {
    fn_03488aec(*(void **)((char*)object + 4), arg1);
}
