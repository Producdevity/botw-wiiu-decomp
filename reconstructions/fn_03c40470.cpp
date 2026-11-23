extern "C" void fn_03c1ea3c(int, int);

extern "C" void fn_03c40470(void* arg0, unsigned char arg1) {
    void* var_r30;

    var_r30 = (*(void**)((char*)arg0 + 536));
    if (var_r30 != 0) {
        do {
            if (((int) (*(unsigned char*)((char*)var_r30 + 177)) != 0) && ((unsigned int) ((*(unsigned char*)((char*)var_r30 + 176)) != 0) != arg1)) {
                (*(unsigned char*)((char*)var_r30 + 176)) = arg1;
                fn_03c1ea3c((*(int*)((char*)var_r30 + 568)), arg1);
            }
            var_r30 = (*(void**)((char*)var_r30 + 572));
        } while (var_r30 != 0);
    }
}
