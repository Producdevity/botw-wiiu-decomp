extern "C" int fn_02fc7d1c(void);
extern "C" void fn_02fc8020(void*);
extern "C" void fn_02fc828c(void*);
extern "C" void fn_02fc85a4(void*, void*);

extern "C" void fn_02fc958c(void *arg0) {
    fn_02fc8020(arg0);
    fn_02fc828c(arg0);
    fn_02fc85a4(arg0, (void *)(fn_02fc7d1c()));
}
