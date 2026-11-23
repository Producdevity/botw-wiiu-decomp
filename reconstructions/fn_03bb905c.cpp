struct Opaque_03bb1598;
extern "C" Opaque_03bb1598* data_1047f05c;
extern "C" signed char fn_03bb4d54(int, void*);
extern "C" void fn_03bb8fdc(void*);

extern "C" void fn_03bb905c(void* arg0) {
    int temp_r0;

    if ((int) (*(int*)((char*)arg0 + 248)) == 0) {
        temp_r0 = (*(int*)((char*)data_1047f05c + 64));
        (*(int*)((char*)arg0 + 248)) = temp_r0;
        if (temp_r0 == 0) {
            (*(signed char*)((char*)arg0 + 30)) = 1;
            return;
        }
    }
    fn_03bb8fdc(arg0);
    (*(signed char*)((char*)arg0 + 29)) = fn_03bb4d54((*(int*)((char*)arg0 + 248)), (char*)arg0 + 8);
}
