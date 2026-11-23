extern "C" void fn_02710c2c(void* object);
extern "C" void fn_0277f22c(void* object, int flags);

extern "C" void fn_02710fc8(void* object, int flags) {
    fn_02710c2c(object);
    fn_0277f22c(object, flags);
}
