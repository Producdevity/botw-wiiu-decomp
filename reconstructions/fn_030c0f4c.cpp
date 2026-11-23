
extern "C" void fn_030c0f4c(void* arg0) {
    if ((int) (*(unsigned char*)arg0) != 0) {
        (*(int (**)(void*, void*))((char*)((*(void**)((char*)arg0 + 144))) + 92))(arg0, (char*)arg0 + 4);
        (*(unsigned char*)arg0) = 0U;
        (*(unsigned char*)((char*)arg0 + 1)) = 1U;
        (*(int (**)(void*, void*, void*, int))((char*)((*(void**)((char*)arg0 + 144))) + 100))(arg0, (char*)arg0 + 68, (char*)arg0 + 4, (*(int*)((char*)arg0 + 132)));
        (*(unsigned char*)((char*)arg0 + 1)) = 0U;
        return;
    }
    if ((int) (*(unsigned char*)((char*)arg0 + 1)) != 0) {
        (*(int (**)(void*, void*, void*, int))((char*)((*(void**)((char*)arg0 + 144))) + 100))(arg0, (char*)arg0 + 68, (char*)arg0 + 4, (*(int*)((char*)arg0 + 132)));
        (*(unsigned char*)((char*)arg0 + 1)) = 0U;
    }
}
