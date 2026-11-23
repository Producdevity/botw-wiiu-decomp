extern "C" void fn_0370d910(void*, void*, void*, int);
extern "C" void fn_0370e02c(void*);

extern "C" void fn_0221c254(void* * arg0) {
    int var_r29;
    int var_r30;

    var_r29 = 1;
    var_r30 = 2;
    do {
        fn_0370d910((*(void**)((char*)(*arg0) + 916)), (void*)(var_r29), 0, 1);
        var_r30 -= 1;
        var_r29 += 1;
    } while (var_r30 != 0);
    fn_0370e02c((*(void**)((char*)(*arg0) + 916)));
}
