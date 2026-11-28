extern "C" void fn_02d4db2c(void*, void*, int, void*, float);
extern "C" void fn_02e65d74(void*);

extern "C" float data_101e4b64;

extern "C" void fn_02d4e044(void* object) {
    int buffer;

    fn_02e65d74(&buffer);
    fn_02d4db2c(object, &buffer, -1, (void*)-1, data_101e4b64);
}
