extern "C" void fn_02e7607c(void*, void*);
extern "C" void fn_02e76138(void*, void*);
extern "C" void fn_02e7639c(void*);
extern "C" void fn_02e7774c(void*);

extern "C" void fn_02e7777c(void* object, void* other) {
    fn_02e7607c(object, other);
    fn_02e76138(object, other);
    fn_02e7639c(object);
    fn_02e7774c(object);
}
