extern "C" void fn_02d0a544(void*, void*, void*);
extern "C" int fn_02d149a0(void*);

extern "C" int data_101e07f0;

extern "C" int fn_02d1649c(void* object) {
    if (fn_02d149a0(object) == 0) {
        fn_02d0a544(object, &data_101e07f0, 0);
    }
    return 1;
}
