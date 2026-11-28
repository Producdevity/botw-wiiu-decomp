extern "C" bool fn_02ea3f6c(void *);
extern "C" void fn_02f63748(void*, void*);

extern "C" void *data_104698f8;

extern "C" void fn_02f639fc(void *object, void *mode) {
    if ((mode != (void *)1) || (fn_02ea3f6c(data_104698f8) == 0)) {
        fn_02f63748(object, mode);
    }
}
