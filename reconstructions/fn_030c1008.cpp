extern "C" void fn_030c0f4c(void* object);

extern "C" void* fn_030c1008(void* object) {
    fn_030c0f4c(object);
    return static_cast<char*>(object) + 4;
}
