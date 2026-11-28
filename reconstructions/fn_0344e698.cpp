extern "C" void fn_03488b8c(void *object, void *argument);

extern "C" void fn_0344e698(void* object, void* arg1) {
    fn_03488b8c(*(void **)((char*)object + 4), arg1);
}
