extern "C" int fn_03344560(void*, int);
extern "C" int fn_033445d8(void*, int);

extern "C" void fn_03344a50(void* arg0, int arg1) {
    if (((int) (*(unsigned char*)((char*)arg0 + 388)) != 0) && (fn_03344560(arg0, arg1) == 0)) {
        (*(unsigned char*)((char*)arg0 + 388)) = 0U;
        return;
    }
    if (fn_033445d8(arg0, arg1) != 0) {
        (*(unsigned char*)((char*)arg0 + 388)) = 1U;
    }
}
