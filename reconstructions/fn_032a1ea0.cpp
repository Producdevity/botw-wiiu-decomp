extern "C" void fn_030bb668(void*);
extern "C" void fn_030bb69c(void*);
extern "C" int fn_032a1d50(void*, int);
extern "C" void* fn_032a12a0(void* table, unsigned int key);

struct Opaque_fn_032a1ea0 {
    unsigned char padding_0[4];
    unsigned char lock[4];
};

extern "C" void* fn_032a1ea0(Opaque_fn_032a1ea0* table, int id) {
    void* lock = table->lock;
    fn_030bb668(lock);
    int key = id;
    int index = fn_032a1d50(table, key);
    void* result = 0;
    if (index != -1) {
        result = fn_032a12a0(table, index);
    }
    fn_030bb69c(lock);
    return result;
}
