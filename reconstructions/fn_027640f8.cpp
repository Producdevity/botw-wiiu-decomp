extern "C" void fn_0254bff4(void*);
extern "C" void fn_0294f720(void *, int, void *);
extern "C" void fn_0339bd70(void *);

extern "C" void fn_027640f8(void **arg0) {
    fn_0254bff4(arg0);
    fn_0339bd70(*arg0);
    fn_0294f720(*arg0, 4, (char *)arg0 + 0x144);
}
