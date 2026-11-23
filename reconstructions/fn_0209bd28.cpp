extern "C" void fn_0209acfc(void* context);

extern "C" void fn_0209bd28(void* object) {
    *(int*)((char*)object + 2936) = (*(int*)((char*)object + 2936)) | 0x1000;
    fn_0209acfc(object);
}
