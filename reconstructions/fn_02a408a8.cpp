extern "C" int data_10467c34;
extern "C" void fn_02a3fbe8(void*);
extern "C" int fn_02a404d0(void*);
extern "C" int fn_02a40788(void*);
extern "C" int fn_02a40834(void*);
extern "C" int fn_02ddf554();
extern "C" int fn_02e35b5c(int);

extern "C" void fn_02a408a8(void* arg0) {
    unsigned int temp_r0;

    if (fn_02e35b5c(data_10467c34) == 0) {
        temp_r0 = (*(unsigned int*)((char*)arg0 + 64));
        switch (temp_r0) {
        case 1:
            fn_02a404d0(arg0);
            return;
        case 2:
            fn_02a40788(arg0);
            return;
        case 5:
            fn_02a40834(arg0);
            return;
        case 7:
            if (fn_02ddf554() == 0) {
                fn_02a3fbe8(arg0);
            }
            break;
        }
    }
}
