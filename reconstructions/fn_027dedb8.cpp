extern "C" void *data_1047be88;
extern "C" int fn_0366b708(int);

extern "C" int fn_027dedb8() {
    int var_r3;

    if ((void* ) data_1047be88 != 0) {
        var_r3 = 0;
        if ((unsigned int) (*(unsigned int*)((char*)data_1047be88 + 1116)) > 3U) {
            var_r3 = (*(int*)((char*)((*(void**)((char*)data_1047be88 + 1124))) + 12));
        }
        if (fn_0366b708(var_r3) != 0) {
            return 1;
        }
        
        return 0;
    }
    return 0;
}
