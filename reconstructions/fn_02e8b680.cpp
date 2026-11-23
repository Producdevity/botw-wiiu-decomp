extern "C" void fn_02e8b630(void *arg0);

extern "C" int fn_02e8b680(void* arg0) {
    if ((int) (*(unsigned char*)((char*)arg0 + 77)) != 0) {
        fn_02e8b630(arg0);
        (*(unsigned char*)((char*)arg0 + 77)) = (unsigned char) ((*(unsigned char*)((char*)arg0 + 77)) | 16);
        return 1;
    }
    return 0;
}
