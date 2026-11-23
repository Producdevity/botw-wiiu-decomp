extern "C" void fn_02491824(void*);

extern "C" void fn_02491860(void* object, int value, int index) {
    *(int*)((char*)object + 8) = value;
    *(int*)((char*)object + 4) = index;
    fn_02491824(object);
}
