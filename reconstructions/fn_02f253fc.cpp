extern "C" void fn_02f0a74c(void*, void*);
extern "C" int fn_02f24d98(void*, void*);
extern "C" void fn_02f24e6c(void*, int);
extern "C" void fn_02f25290(void*, void*);

extern "C" void fn_02f253fc(void *arg0, void *arg1) {
    fn_02f24d98(arg0, 0);
    fn_02f24e6c(arg0, 3);
    fn_02f25290(arg0, (*(void **)((char *)(arg1) + (8))));
    fn_02f0a74c((char *)arg0 + 0xE4, arg1);
}
