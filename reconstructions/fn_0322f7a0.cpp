extern "C" int fn_0324d56c(void* object);
extern "C" void fn_0324d5c4(void* object, void* member, void* arg);

extern "C" void fn_0322f7a0(char* object, void* arg) {
    if (fn_0324d56c(object)) {
        char* member = object + 8;
        fn_0324d5c4(object, member, arg);
    }
}
