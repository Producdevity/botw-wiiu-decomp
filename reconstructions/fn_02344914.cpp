extern "C" float data_1008a974;
extern "C" void fn_02345624(void*, void*);
extern "C" void fn_037946f0(void *, int, int, int, int, float);

extern "C" void fn_02344914(void* arg0, void* arg1) {
    (*(int (**)(void*))((char*)((*(void**)((char*)arg0 + 32))) + 28))((char*)arg0 + 28);
    fn_037946f0(arg0, (*(int*)((char*)arg0 + 28)), *(*(unsigned char**)((char*)arg0 + 24)), 0, 0, data_1008a974);
    fn_02345624(arg0, arg1);
}
