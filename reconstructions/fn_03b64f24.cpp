extern "C" void fn_043484e0(void*);
extern "C" void fn_04348578(void*);
extern "C" void fn_043486c0(void*);

extern "C" void fn_03b64f24(void *arg0) {
    void *temp_r30;
    void *temp_r31;

    temp_r30 = (*(void **)((char *)(arg0) + (0)));
    temp_r31 = (*(void **)((char *)(arg0) + (4)));
    fn_043484e0((char *)arg0 + 8);
    fn_043486c0(temp_r30);
    fn_04348578(temp_r31);
}
