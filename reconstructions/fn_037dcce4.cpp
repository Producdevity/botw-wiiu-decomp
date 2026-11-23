extern "C" void fn_03513128(int);
extern "C" void fn_0355ec60(int);
extern "C" void fn_03573a9c(int);
extern "C" void fn_03586d90(int);
extern "C" void fn_03589e68(int);

extern "C" void fn_037dcce4(void* arg0) {
    fn_03589e68((*(int*)((char*)arg0 + 40)));
    fn_03513128((*(int*)((char*)arg0 + 24)));
    fn_0355ec60((*(int*)((char*)arg0 + 28)));
    fn_03586d90((*(int*)((char*)arg0 + 72)));
    fn_03573a9c((*(int*)((char*)arg0 + 76)));
    (*(int*)((char*)arg0 + 116)) = 2;
    (*(unsigned char*)((char*)arg0 + 332)) = (unsigned char) ((*(unsigned char*)((char*)arg0 + 332)) | 4);
}
