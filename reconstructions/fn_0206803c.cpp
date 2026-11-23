extern "C" int data_1046d3ac;
extern "C" bool fn_031ca674(void* object);
extern "C" int fn_031cb284(void*);

extern "C" void fn_0206803c(void* arg0) {
    int temp_r31;

    temp_r31 = data_1046d3ac;
    if ((fn_031ca674((void*)(temp_r31)) != 0) || (fn_031cb284((void*)(temp_r31)) != 0)) {
        (*(signed char*)((char*)arg0 + 681)) = 1;
        return;
    }
    (*(signed char*)((char*)arg0 + 681)) = 0;
}
