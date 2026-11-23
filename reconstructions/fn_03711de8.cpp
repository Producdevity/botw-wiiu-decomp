extern "C" void fn_03711d64(void*, int, int, void*, int, int);

extern "C" void fn_03711de8(void* arg0, int arg1) {
    void* var_r31;

    var_r31 = (*(void**)((char*)arg0 + 252));
    if (var_r31 != 0) {
        do {
            fn_03711d64(var_r31, (*(int*)((char*)arg0 + 164)), (*(int*)((char*)arg0 + 4)), (char*)var_r31 + 12, (*(int*)((char*)var_r31 + 20)), arg1);
            var_r31 = (*(void**)((char*)var_r31 + 24));
        } while (var_r31 != 0);
    }
}
