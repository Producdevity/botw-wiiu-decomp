
extern "C" void fn_02af8f60(void* arg0) {
    int var_r29;
    int var_r30;

    var_r29 = 7;
    var_r30 = 4;
    do {
        (*(int (**)(void*, int))((char*)((*(void**)((char*)arg0 + 12))) + 108))(arg0, var_r29);
        var_r30 -= 1;
        var_r29 += 1;
    } while (var_r30 != 0);
}
