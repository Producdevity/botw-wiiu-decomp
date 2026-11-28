extern "C" int fn_02fc7d1c(void);
extern "C" void fn_02fc8020(void*);
extern "C" void fn_02fc828c(void*);
extern "C" void fn_02fc85a4(void*, void*);

extern "C" void fn_02fc958c(void *object) {
    fn_02fc8020(object);
    fn_02fc828c(object);
    fn_02fc85a4(object, (void *)(fn_02fc7d1c()));
}
