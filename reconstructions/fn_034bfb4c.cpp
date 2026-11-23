extern "C" void fn_034bfb30(void*);

extern "C" void fn_034bfb4c(void* object) {
    *(int*)((char*)object + 16) = (*(int*)((char*)object + 16)) | 2;
    fn_034bfb30(object);
}
