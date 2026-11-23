extern "C" bool fn_03485c18(const void* object);
extern "C" unsigned int fn_0348609c(int);
extern "C" void fn_0349ec2c(void*, int);
extern "C" void fn_034a08e0(void*);

extern "C" void fn_034a0c78(int* arg0) {
    if (fn_03485c18((const void*)(*arg0)) != 0) {
        fn_0349ec2c(arg0, 512);
        return;
    }
    if (fn_0348609c(*arg0) == 0) {
        fn_034a08e0(arg0);
    }
}
