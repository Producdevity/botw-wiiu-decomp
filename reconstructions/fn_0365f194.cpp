struct Metadata {
    unsigned char storage[280];
};

extern "C" void* fn_031cf5fc(Metadata*, const void*, const void*, const void*);
extern "C" void fn_031c85e8(void*, Metadata*, int, int);
extern "C" void fn_031cf8d0(void*, int);
extern "C" void* data_1046d3ac;
extern "C" const char data_10301864[];
extern "C" const char data_10301868[];

extern "C" void fn_0365f194(void) {
    void* manager = data_1046d3ac;
    if (manager != 0) {
        Metadata metadata;
        fn_031cf5fc(&metadata, data_10301868, data_10301868, data_10301864);
        fn_031c85e8(manager, &metadata, 0, 0);
        fn_031cf8d0(&metadata, 2);
    }
}
