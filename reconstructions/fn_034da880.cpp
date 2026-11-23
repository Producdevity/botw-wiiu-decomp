extern "C" void fn_034da75c(int, void*, int);

extern "C" void fn_034da880(int value, void* object, void* other) {
    *(int*)object = *(int*)((char*)other + 28);
    fn_034da75c(value, object, *(int*)other);
}
