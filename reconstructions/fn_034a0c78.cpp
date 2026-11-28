extern "C" bool fn_03485c18(const void* object);
extern "C" unsigned int fn_0348609c(int);
extern "C" void fn_0349ec2c(void*, int);
extern "C" void fn_034a08e0(void*);

extern "C" void fn_034a0c78(int* pointer) {
    if (fn_03485c18((const void*)(*pointer)) != 0) {
        fn_0349ec2c(pointer, 512);
        return;
    }
    if (fn_0348609c(*pointer) == 0) {
        fn_034a08e0(pointer);
    }
}
