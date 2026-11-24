extern "C" void* fn_032a12a0(void* table, unsigned int key);
extern "C" void fn_03196510(void*);
extern "C" void fn_03485f68(void*);

struct Opaque_fn_03630374 {
    int count;
    unsigned char table[116];
    void* handle;
};

extern "C" void fn_03630374(Opaque_fn_03630374* object) {
    fn_03196510(fn_032a12a0(object->table, 0));
    fn_03485f68(object->handle);
    object->count = object->count + 1;
}
